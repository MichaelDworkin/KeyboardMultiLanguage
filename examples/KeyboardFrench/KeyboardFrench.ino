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
Keyboard.println("Les naïfs ægithales hâtifs pondant à Noël où il gèle sont sûrs d'être déçus en voyant leurs drôles d'œufs abîmés");
}

void loop() 
{
}
