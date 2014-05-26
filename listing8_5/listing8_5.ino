int ledPins[] = {9, 11, 10};

void setup() {
    pinMode(ledPins[0], OUTPUT);
    analogWrite(ledPins[0], 80);
    pinMode(ledPins[2], OUTPUT);
    analogWrite(ledPins[2], 80);
}

void loop() {
}
