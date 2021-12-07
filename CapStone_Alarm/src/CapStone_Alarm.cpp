/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/gabi/Documents/IoT/CapStone/CapStone_Alarm/src/CapStone_Alarm.ino"
/*
 * Project CapStone_Alarm
 * Description:
 * Author:
 * Date:
 */


void setup();
void loop ();
#line 9 "c:/Users/gabi/Documents/IoT/CapStone/CapStone_Alarm/src/CapStone_Alarm.ino"
const int teen = D16;


void setup(){
  pinMode(teen,OUTPUT);
}
void loop (){
   digitalWrite (teen,HIGH);
   delay(500);
   digitalWrite (teen,LOW);
   delay(500);
}