/*
 * Project CapStone_Alarm
 * Description:
 * Author:
 * Date:
 */

bool BmeStatus;

const int blueBut = 13;
const int teen = D16;

void setup()
{
  pinMode(teen, OUTPUT);
}
void loop()
{
  digitalWrite(teen, HIGH);
  delay(500);
  digitalWrite(teen, LOW);
  delay(500);
}

bool buttonState = digitalRead(blueBut);
if (buttonState){
  showEmergCall();
  digitalWrite(teen, HIGH);
}
else{
  Serial.printf("Darkness\n");
  digitalWrite(teen, LOW);
}
}
void showEmergCall(void) {
  display.clearDisplay();
  display.setTextSize(3);
  display.setTextColor(SSD1306_WHITE);
  display.setRotation(0);
  display.setCursor(10, 7);
  display.printf("Dialed", 47, 47);
  display.display();
  delay(800);

  display.clearDisplay();
  display.setTextSize(3);
  display.setTextColor(SSD1306_WHITE);
  display.setRotation(0);
  display.setCursor(35, 10);
  display.printf("911", 47, 47);
  display.display();
  delay(800);
}


void startObjects() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); //Dont proceed, loop forever
  }

  BmeStatus = bme.begin (BMEADDRESS);
  if (BmeStatus == false) {
    Serial.printf("BME280 at address 0x%02 X failed tostart", BMEADDRESS);
  }

