#include "pin_config.h"

int multiplier[] = {2, 4, 8, 3, 6, 4, 8, 8, 6};//tone sequence sound

void SpeakerInit() {
  pinMode(speaker, OUTPUT);     // Speaker plus
  pinMode(speakerMin, OUTPUT);  // Use speakerMin as speaker ground
  digitalWrite(speakerMin, LOW);
}

void SpeakerBeep(int speaker, int b[], int c) {
  for (int i = 0; i < c; i++) {
    tone(speaker, 220 * b[i]);
    delay(100);
  }
  for (int i = c; i >= 0; i--) {
    tone(speaker, 440 * b[i]);
    delay(100);
  }
  noTone(speaker);
}
