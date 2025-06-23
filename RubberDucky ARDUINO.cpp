#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0); // Wake up
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Win + R
  DigiKeyboard.delay(500);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Hello from fake Rubber Ducky!");
}

void loop() {}
