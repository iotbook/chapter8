int switchPin = 2;
int ledPin = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);
}

void loop() {
  if (digitalRead(switchPin) == 0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
    
    
