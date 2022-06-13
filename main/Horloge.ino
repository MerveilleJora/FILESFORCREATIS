void Horloge() {
  char heure[20];
  char Date[20];
  DateTime now = rtc.now();
  sprintf(heure, "h : %02d:%02d:%02d", now.hour(), now.minute(), now.second());
  sprintf(Date,  "d : %02d:%02d:%02d", now.day(), now.month(), now.year());
  if (Stade == 1) {
    file.print(heure);
  }
  else if (Stade == 2) {
    Serial.print(heure);
  }
}
