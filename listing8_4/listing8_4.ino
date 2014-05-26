int ledPins[] = {9, 11, 10};

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
    delay(1000);
    digitalWrite(ledPins[i], HIGH);
  }
}

void loop() {
}
