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
void loop();
#line 9 "c:/Users/gabi/Documents/IoT/CapStone/CapStone_Alarm/src/CapStone_Alarm.ino"
int buttonState;
int buttonStateAlarm;

const int hallPin = A5;
const int ledRed = D5;
const int ledBlue = D6;
const int blueBut = A3;
const int greenBut = A4;
const int teen = D4;




void setup()
{

  pinMode(hallPin, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(teen, OUTPUT);
  pinMode(blueBut, INPUT);
  pinMode(greenBut, INPUT);
}
void loop()
{

  if (buttonStateAlarm == HIGH)
  {
    if (digitalRead(hallPin))
    {
      digitalWrite(ledRed, HIGH);
    }
    else
    {
      digitalWrite(ledBlue, LOW);
    }
  }

  buttonState = digitalRead(blueBut);
  if (buttonState)
  {
    digitalWrite(teen, HIGH);
    Serial.printf("OH HEY!\n");
  }
  else{
    digitalWrite(teen, LOW);

  }
}

