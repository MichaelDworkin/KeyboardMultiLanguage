/*
This is an example of emulation of a Hebrew USB keyboard with Arduino Leonardo (ATMEGA32U4)
Do not forget to select the correct input language for your operating system.
*/

#include <KeyboardMultiLanguage.h>
#include "KeyboardMappingHB.h"

void setup() 
{
delay(4000);
Keyboard.language(Hebrew);
Keyboard.println("אני יכול לאכול זכוכית וזה לא מזיק לי");
}

void loop() 
{
}
