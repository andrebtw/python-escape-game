void temp_potentiometer() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
}
