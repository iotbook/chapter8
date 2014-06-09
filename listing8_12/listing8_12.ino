int tempSensorPin = A1; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(tempSensorPin);
  float voltage = reading * (3300.0 / 1024.0);
  float tempC = (voltage - 500.0) / 10.0;
  float tempF = ((tempC * 9.0) / 5.0) + 32.0;
  
  Serial.print("\nReading: ");
  Serial.print(reading);
  
  Serial.print("\nVoltage: ");
  Serial.print(voltage);
  
  Serial.print("\nTemp C: ");
  Serial.print(tempC);
  
  Serial.print("\nTemp F: ");
  Serial.print(tempF);
  
  delay(1000);
}
