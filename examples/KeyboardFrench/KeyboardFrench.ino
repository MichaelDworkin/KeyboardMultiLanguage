/*
This is an example of emulation of a French USB keyboard with Arduino Leonardo (ATMEGA32U4)
Do not forget to select the correct input language for your operating system.
*/

#include <KeyboardMultiLanguage.h>
#include "KeyboardMappingFR.h"

void setup() 
{
delay(4000);
Keyboard.language(French);
Keyboard.println("Je peux manger du verre, ça ne me fait pas mal");
}

void loop() 
{
}
