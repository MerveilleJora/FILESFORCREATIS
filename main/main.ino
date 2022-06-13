#include <SoftwareSerial.h>
#include <Adafruit_BME280.h>
#include "RTClib.h"
#include <ChainableLED.h>
#include <SPI.h>
#include <SD.h>
// Parametres
unsigned int Inactivite       = 30;     // Temps en S
int LOG_INTERVAL              = 5000;   // en ms
unsigned int FILE_MAX_SIZE    = 2048;   // Octets
int compteur = 0;
unsigned int TIMEOUT          = 30 * 60;
// ------ Couleurs de la led         R    G    B
#define Rouge         setColorRGB(0, 255, 0,   0)
#define Vert          setColorRGB(0, 0,   255, 0)
#define Bleu          setColorRGB(0,  0,  0,   255)
#define Orange        setColorRGB(0, 255, 128, 0)
#define Orange_Fonce  setColorRGB(0, 200, 200, 1)
#define Jaune         setColorRGB(0, 239, 255, 0)
#define Blanc         setColorRGB(0, 255, 255, 255)

// ------ Bouttons
ChainableLED led(7, 8, 5);
#define bout_Rouge  3
#define bout_Vert   2
#define Temps_Appuis 5000            // ms
volatile bool Bout_Rouge  = false;
volatile bool Bout_Vert   = false;
long temp_vert   = 0;
long temp_rouge  = 0;
long start_rouge = 0;
long start_vert  = 0;
byte Stade       = 0;
byte Prev_Stade;

// ------ Erreurs
byte Error = 0;

// ------ Heure
RTC_DS1307 rtc;

// ------ Variable Capteur BME
#define adresseI2CduBME280 0x76
Adafruit_BME280 bme;

// ------ Variable Capteur lumière
#define capteur_lum 0
int val_lum;

// ------ Variable Capteur GPS

// ------ Carte SD
int NumFile = 0;
String FileName = "";
File file;

// ------ Activation ou pas des capteurs
byte ActivSensor = 0x0F;

int LUMIN_LOW  = 10;
int LUMIN_HIGH = 1500;
int MIN_TEMP_AIR = -10;
int MAX_TEMP_AIR = 60;
int HYGR_MINT = 0;
int HYGR_MAXT = 50;
int PRESSURE_MIN = 850;
int PRESSURE_MAX = 1080;

// information
String VERSION = "1.0";

void setup() {
  Serial.begin(9600);
  // ----------------------------------- Setup Carte SD
  pinMode(4, OUTPUT);
  if (!SD.begin(4)) {
    bitSet(Error, 0);
  }
  // ----------------------------------- Setup Bouttons
  pinMode(bout_Rouge, INPUT);
  pinMode(bout_Vert , INPUT);
  attachInterrupt(digitalPinToInterrupt(bout_Vert),  SwitchModeVert,  CHANGE);
  attachInterrupt(digitalPinToInterrupt(bout_Rouge), SwitchModeRed ,  CHANGE);

  // ----------------------------------- Setup Horloge
  if (!rtc.begin()) {
    bitSet(Error, 1);
  }
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  DateTime now = rtc.now();
  FileName = String(now.day()) + String(now.month()) + "_" + String(NumFile) + ".txt";
  // ----------------------------------- Setup BME280
  if (!bme.begin(adresseI2CduBME280)) {
    bitSet(Error, 2);
  }
  // ----------------------------------- Detection de la pression au démérage
  delay(2000);
  if (Bout_Rouge == 1) {
    delay(Temps_Appuis);
    Stade = 4;
  }
  else {
    Stade = 1;
  }
}
/////////////////////////////////////////////////////////////////////////////////////
/*
   1 - Mode standard        LED verte continue
   2 - Mode Maintenance     LED jaune continue
   3 - Mode Eco             LED bleue continue
   4 - Mode Configuration   LED orange continue
   //////////////////////////////////////////// Erreur
   Erreur d’accès à l’horloge RTC
   Erreur d’accès aux données du GPS
   Erreur accès aux données d’un capteur
   Données reçues d’un capteur incohérentes - vérification matérielle requise
   Carte SD pleine
   Erreur d’accès ou d’écriture sur la carte SD
*/
// Structure Heure
/*
  typedef struct CLOCK{
  byte HEURE;
  byte MINUTE;
  byte SECONDE;
  }
  typedef struct DATE{
  byte MOIS;
  byte JOUR;
  byte ANNEE;
  }
  typedef struct DAY{
  char HEURE[7];
  }
*/
void loop() {
  // --------------------------------------------------------- Mode standard
  if (Stade == 1) {
    VerifError(Error);
    led.Vert;
    delay(LOG_INTERVAL);
    //--------------------------------- Recuperation Capteurs et enregistrement dans la carte sd
    // Mettre le nom du fichier à la date du jours AAMMJJ_
    file = SD.open(FileName, FILE_WRITE);
    CarteSD();
    Horloge();
    Pression( 1);
    Humid(    1);
    Temp(     1);
    lum(      1);

    //---------------------------------
    file.close();
    // Erreur possible

    // Changement de mode
    if (Bout_Rouge == 1) {
      temp_rouge = millis();
      if (temp_rouge - start_rouge > Temps_Appuis ) {
        Stade = 2;
        Prev_Stade = 1;
      }
    }
    if (Bout_Vert == 1) {
      temp_vert = millis();
      if (temp_vert - start_vert > Temps_Appuis) {
        Stade = 3;
        Prev_Stade = 1;
      }
    }
  }
  // --------------------------------------------------------- Mode Maintenance
  if (Stade == 2) {
    led.Jaune;
    delay(LOG_INTERVAL);
    file = SD.open(FileName, FILE_WRITE);
    //--------------------------------- Recuperation Capteurs
    Horloge();
    Pression( 0);
    Humid(    0);
    Temp(     0);
    lum(      0);
    //---------------------------------
    file.close();
    // Changement de mode
    if (Bout_Rouge) {
      temp_rouge = millis();
      if (temp_rouge - start_rouge > Temps_Appuis ) {
        if (Prev_Stade == 3) {
          Stade = 3;
        }
        if (Prev_Stade == 1)  {
          Stade = 1;
        }
      }
    }
  }
  // --------------------------------------------------------- Mode Eco
  if (Stade == 3) {
    VerifError(Error);
    led.Bleu;
    delay(LOG_INTERVAL * 2);
    //--------------------------------- Recuperation Capteurs
    // Gps une mesures sur 2
    File file = SD.open(FileName, FILE_WRITE);
    CarteSD();
    Horloge();
    Pression( 1);
    Humid(    1);
    Temp(     1);
    lum(      1);
    //---------------------------------
    file.close();
    //---------------------------------
    // Changement de mode
    if (Bout_Vert) {
      temp_vert = millis();
      if (temp_vert - start_vert > Temps_Appuis) {
        Prev_Stade = 3;
        Stade = 2;
      }// fin If
    }// Fin If
    if (Bout_Rouge) {
      temp_rouge = millis();
      if (temp_rouge - start_rouge > Temps_Appuis ) {
        Stade = 1;
      }
    }
  }
  // --------------------------------------------------------- Mode Configuration
  if (Stade == 4) {
    VerifError(Error);
    led.Orange;
    delay(LOG_INTERVAL);
    Serial.print("Version : ");
    Serial.println(VERSION);
    Serial.print("Intervale de mesures en s : ");
    Serial.println(LOG_INTERVAL / 1000);
    Serial.print("Taille Fichier : ");
    Serial.println(FILE_MAX_SIZE);
    Serial.print("Temp abandon donnee : ");
    Serial.print(TIMEOUT);
    //--------------------------------- Parametreage Capteurs
    
    //---------------------------------
    if (digitalRead(bout_Rouge) == LOW || digitalRead(bout_Vert) == LOW || Serial.available() != 0) {
      compteur = 0;
    }
    if (digitalRead(bout_Rouge) == HIGH && digitalRead(bout_Vert) == HIGH) {
      delay(2000);
      while (digitalRead(bout_Rouge) == HIGH && digitalRead(bout_Vert) == HIGH  ) {
        led.Orange;
        delay(500);
        led.Orange_Fonce;
        delay(500);
        compteur = compteur + 1;
        if ( compteur > Inactivite ) {
          Stade = 1;
          break;
        }
        if (Serial.available() > 0 ) {
          compteur = 0;
        }
      }
    }
  }
}
////////////////////////////////////// Rouge ///////////////////////////////////////////////
void SwitchModeVert() {
  if (Bout_Vert == 1) {
    start_vert = millis();
    Bout_Vert = 0;
    return;
  }
  if (Bout_Vert == 0) {
    start_vert = millis();
    Bout_Vert = 1;
  }
}

void  SwitchModeRed() {
  if (Bout_Rouge == 1) {
    start_rouge = millis();
    Bout_Rouge = 0;
    return;
  }
  if (Bout_Rouge == 0) {
    start_rouge = millis();
    Bout_Rouge = 1;
    return;
  }
}
