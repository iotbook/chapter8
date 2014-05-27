int buzzerP = 7;
int buzzerN = 12;

void setup() {
  pinMode(buzzerP, OUTPUT); 
  pinMode(buzzerN, OUTPUT);
}

void loop() {
  digitalWrite(buzzerP, HIGH);
  digitalWrite(buzzerN, LOW);
}
    
    
