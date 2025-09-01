void monitorSystem() {
  int smoke = analogRead(A0);              // MQ-2
  float temp = dht.readTemperature();      // DHT11

  Serial.print("Smoke: "); Serial.println(smoke);
  Serial.print("Temp: ");  Serial.println(temp);

  if (smoke > 560 || temp > 50) {
    digitalWrite(BUZZER, HIGH);
    digitalWrite(LED, HIGH); delay(300);
    digitalWrite(LED, LOW);  delay(300);
    Serial.println("ALERT: Fire/Smoke!");
  } else {
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    Serial.println("Status: Normal");
  }
}
