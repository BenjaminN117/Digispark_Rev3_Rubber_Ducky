// Product: RickRoll Background Change Script
// Description: Script that changes the desktop background to a picture of Rick Astley
// Author: Benjamin Norman 2022 [Github: https://github.com/BenjaminN117]

#include "DigiKeyboard.h"
void setup() {
  
  // Activate the on-board LED when the script is running
  pinMode(1, OUTPUT);
}
void loop() {
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0); 
  // Get the Rick image
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("PowerShell.exe -windowstyle hidden {wget https://www.giantfreakinrobot.com/wp-content/uploads/2022/08/rick-astley.jpg -outfile \"rick.jpg\"}");
  
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);

  // Change the background
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(700);
  DigiKeyboard.print("mspaint");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_O, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("%USERPROFILE%\\rick.jpg");
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_K);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_F);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  digitalWrite(1, LOW);
  
  exit(0);
}
