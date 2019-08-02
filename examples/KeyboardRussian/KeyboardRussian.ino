/*
This is an example of emulation of a Russian USB keyboard with Arduino Leonardo (ATMEGA32U4)
Не забудьте выбрать правильный язык ввода для вашей операционной системы.
*/

#include <KeyboardMultiLanguage.h>
#include "KeyboardMappingRU.h"

void setup() 
{
delay(4000);
Keyboard.language(Russian);
Keyboard.println("Я могу есть стекло, оно мне не вредит.");
}

void loop() 
{
}
