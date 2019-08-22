/*
This is an example of emulation of a French USB keyboard with Arduino Leonardo (ATMEGA32U4)
Do not forget to select the correct input language for your operating system.
*/

#include <KeyboardMultiLanguage.h>
#include "KeyboardMappingThai.h"

void setup() 
{
delay(4000);
Keyboard.language(Thai);
Keyboard.println("เรียนรู้การเขียน program ควบคุม แขนหุ่นยนต์ และอื่นๆ ด้วย arduino board และการสร้างและพัฒนาแขนหุ่นยนต์");
}

void loop() 
{
}
