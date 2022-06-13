void Humid(bool mode) {
  if (bitRead(ActivSensor, 3) == 1) {
    String Humid = " H : ";
    Humid = Humid + String(bme.readHumidity());
    Humid = Humid + " %";
    if ( mode == 1 ) {
      file.print(Humid);
    }
    else {
      Serial.print(Humid);
    }
  }
  else {
    bitSet(Error, 3);
  }
}
