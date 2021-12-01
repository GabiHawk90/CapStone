/*
 * Project CapStone_Alarm
 * Description:
 * Author:
 * Date:
 */


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