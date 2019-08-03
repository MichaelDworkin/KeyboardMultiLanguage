/*
This is an example of emulation of a German USB keyboard with Arduino Leonardo (ATMEGA32U4)
Vergessen Sie nicht, die richtige Eingabesprache für Ihr Betriebssystem auszuwählen.
*/

#include <KeyboardMultiLanguage.h>
#include "KeyboardMappingGE.h"

void setup() 
{
delay(4000);
Keyboard.language(German);
Keyboard.println("abc öÖäÄüÜ ß\nXYZ q@e€\\mµ");
Keyboard.println("Ich kann Glas essen, ohne mir zu schaden.");
}

void loop() 
{
}
