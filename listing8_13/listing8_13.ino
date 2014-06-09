int lightSensorPin = A6; 
int ledPins[] = {5, 6, A2, A4, A3};

void setup() {
  for(int i=0; i<5; i++) {  
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  if (analogRead(lightSensorPin) < 20) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
  } else {
    for (int i = 0; i < 5; i++) {
      digitalWrite(ledPins[i], LOW);
    }
  }
}
