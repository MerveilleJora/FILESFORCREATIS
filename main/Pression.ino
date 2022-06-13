void Pression(bool mode) {
  if (bitRead(ActivSensor, 0) == 1) {
    String Press = " P : ";
    Press = Press + String(bme.readPressure() / 100.0F );
    Press = Press + " Hpa";
    if (mode == 1) {
      file.print(Press);
    }
    else {
      Serial.print(Press);
    }
  }
  else {
    bitSet(Error, 3);
  }
}
