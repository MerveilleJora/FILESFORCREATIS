int Frappe() {
  while (Serial.available() > 0 ) {
    return Serial.readStringUntil("\n").toInt();
  }
}
