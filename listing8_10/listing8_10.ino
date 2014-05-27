#include "pitches.h"

int buttonPin = A5;

//CCGGAAGFFEEDDC
int melody[] = {
  NOTE_C4,
  NOTE_C4,
  NOTE_G4,
  NOTE_G4,
  NOTE_A4,
  NOTE_A4,
  NOTE_G4,
  NOTE_F4,
  NOTE_F4,
  NOTE_E4,
  NOTE_E4,
  NOTE_D4,
  NOTE_D4,
  NOTE_C4 };
 
 void playSong() {
  for (int thisNote = 0; thisNote < 14; thisNote++) {
    int noteDuration = 250;
    tone(7, melody[thisNote], noteDuration);
    
    int pauseBetweenNotes = noteDuration * 2;
    delay(pauseBetweenNotes);
    noTone(7);
  }
}

void setup() {
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
}

void loop() {
  if (digitalRead(buttonPin) == 0) {
    playSong();
  }
}

