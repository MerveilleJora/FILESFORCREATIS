void lum(bool mode) {
  if ( analogRead(capteur_lum) > LUMIN_LOW && analogRead(capteur_lum) < LUMIN_HIGH) {
    String Lum = " L : ";
    Lum = Lum + String(analogRead(capteur_lum));
    if (mode == 1) {
      file.println(Lum);
    }
    else {
      Serial.println(Lum);
    }
  }
  else {
    String Lum = " L : ERR\n";
    file.println(Lum);
    Serial.println(Lum);
    bitSet(Error, 3);
  }
}
