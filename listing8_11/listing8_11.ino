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

int ledPins[] = {5, 6, A2, A4, A3};
int ledSequence[] = {
  5, 
  6, 
  A2, 
  A4, 
  A3,
  A3,
  A4,
  A2,
  6,
  5,
  6,
  A2,
  A4,
  A3 };

void playSong() {
  for (int thisNote = 0; thisNote < 14; thisNote++) {
    int noteDuration = 250;
    tone(7, melody[thisNote], noteDuration);
    digitalWrite(ledSequence[thisNote], HIGH);  // turn LED on
    int pauseBetweenNotes = noteDuration * 2;
    delay(pauseBetweenNotes);
    digitalWrite(ledSequence[thisNote], LOW); // turn LED off
    noTone(7);
  }
}

void setup() {
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  
  for(int i=0; i<5; i++)  // This for loop will run 5 times
  {  // blink the white LEDs (first 5 LEDs in ledPins array)
    pinMode(ledPins[i], OUTPUT);  // set pin as output
  }
}

void loop() {
  if (digitalRead(buttonPin) == 0) {
    playSong();
  }
}

