void Temp(bool mode) {
  if (bme.readTemperature() > MIN_TEMP_AIR && bme.readTemperature() < MAX_TEMP_AIR) {
    if (bme.readTemperature() > HYGR_MINT && bme.readTemperature() < HYGR_MAXT) {
      if (bitRead(ActivSensor, 2) == 1) {
        String TempC = " T : ";
        TempC = TempC + String(bme.readTemperature()) ;
        TempC = TempC + " °c";
        if (mode == 1) {
          file.print(TempC);
        }
        else {
          Serial.print(TempC);
        }
      }
    }
    else{
      bitClear(ActivSensor, 3);
    }
  }
  else {
    bitSet(Error, 3);
  }
}
