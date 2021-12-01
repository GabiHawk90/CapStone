const int teen = 5;
const int led = 13;
bool radio;


void setup(){
  pinMode(teen,INPUT);
  pinMode(led,INPUT);
 
}
void loop (){
 radio= digitalRead(teen);
 digitalWrite (led,radio);
   
}
