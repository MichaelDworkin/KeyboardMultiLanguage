#include "KeyboardDE.h"

void setup() 
{
delay(3000);
Keyboard.begin();
Keyboard.println("Erste Zeile\nZweite Zeile");
Keyboard.println("Umlauten Test öÖ äÄ üÜ ß");
Keyboard.write(KEY_A_UMLAUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
