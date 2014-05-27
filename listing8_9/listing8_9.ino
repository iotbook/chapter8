#include "pitches.h"

// CCGGAAGFFEEDDC
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
 
void setup() {
  for (int thisNote = 0; thisNote < 14; thisNote++) {
    int noteDuration = 250;
    tone(7, melody[thisNote], noteDuration);
    
    int pauseBetweenNotes = noteDuration * 2;
    delay(pauseBetweenNotes);
    noTone(7);
  }
}

void loop() {
}
