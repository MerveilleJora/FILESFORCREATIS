/*
 * bits 0 = Erreur d’accès ou d’écriture sur la carte SD
 */
void VerifError(byte err){
  // ---------------------------- Verification des Erreures
  // ---------------------------------------------------------- Carte SD
  if (!SD.begin(4)){
    bitSet(Error, 0);
  }
  if ( bitRead(err, 0) == 1){
    while(SD.begin(4) == false){
      led.Rouge;
      delay(1000);
      led.Blanc;
      delay(2000);
    }
    bitClear(Error, 0);
  }
  // ---------------------------------------------------------- Horloge
  if (! rtc.begin()) {
    bitSet(Error, 1);
  }
  if ( bitRead(err, 1) == 1){
    while(rtc.begin() == false){
      led.Rouge;
      delay(1000);
      led.Bleu;
      delay(1000);
    }
    bitClear(Error, 1);
  }
  // ---------------------------------------------------------- Capteurs
  if ( bitRead(err, 2) == 1){
    while(bme.begin(adresseI2CduBME280)){
      led.Rouge;
      delay(1000);
      led.Vert;
      delay(1000);
    }
    bitClear(Error, 2);
  }
  //---------------------------------------------------------- Donnée incohérente
  if ( bitRead(err, 3) == 1){
    while(true){
      led.Rouge;
      delay(1000);
      led.Vert;
      delay(2000);
      if(analogRead(capteur_lum) > LUMIN_LOW && analogRead(capteur_lum) < LUMIN_HIGH){
        bitClear(Error, 3);
        break;
      }
    }
  }
  // Suite des Erreures
}
