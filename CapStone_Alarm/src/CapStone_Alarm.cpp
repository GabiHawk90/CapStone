/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/gabi/Documents/IoT/CapStone/CapStone_Alarm/src/CapStone_Alarm.ino"
/*
 * Project CapStone_Alarm
 * Description:a portable alarm call system
 * Author:Gabriella Hawkins
 * Date:12/9/21
 */
#include "credentials.h"
#include "Adafruit_MQTT/Adafruit_MQTT.h"
#include "Adafruit_MQTT/Adafruit_MQTT_SPARK.h"

void setup();
void loop();
#line 11 "c:/Users/gabi/Documents/IoT/CapStone/CapStone_Alarm/src/CapStone_Alarm.ino"
int buttonState;

const int blueBut = A3;
const int teen = D4;



 SYSTEM_MODE(SEMI_AUTOMATIC); // Uncomment if using without Wifi

 TCPClient TheClient;

 Adafruit_MQTT_SPARK mqtt(&TheClient,AIO_SERVER,AIO_SERVERPORT,AIO_USERNAME,AIO_KEY);
 Adafruit_MQTT_Publish mqttCall911=Adafruit_MQTT_Publish(&mqtt,AIO_USERNAME"/feeds/911");


void setup(){
 Serial.begin(9600);
 waitFor( Serial.isConnected,15000); // wait for Serial Monitor to startup

 WiFi. connect () ; // Connect to internet , but not Particle Cloud
 while(WiFi.connecting()){
 Serial.printf(".");
 }
  pinMode(teen,OUTPUT);
  pinMode(blueBut,INPUT);
 }
void loop(){
 buttonState = digitalRead(blueBut);
  if (buttonState){ 
    mqttCall911.publish(911);// Publishing to a MQTT feed
 if(mqtt.Update()){ // if mqtt object ( Adafruit .io) is available to receive data
 Serial.printf("Publishing %i to Adafruit.io feed FeedNameB\n",mqttCall911);
 mqttCall911.publish(911);
 }
    digitalWrite(teen, HIGH);
    Serial.printf("OH HEY!\n");
  }
  else{
    digitalWrite(teen, LOW);
  }
}

