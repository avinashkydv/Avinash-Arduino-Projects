#include<LiquidCrystal.h>   // complsury to include header for LCD.
LiquidCrystal LCD(13,12,8,7,4,2); // WRITE PIN SERIAL NUMBER.
void setup() {
  // put your setup code here, to run once:
LCD.begin(16,2); // WE HAVE TO SPECIFY SIZE OF LCD(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
LCD.setCursor(0,0);  // TO SET CURSOR FOR PROPER OUTPUT.
LCD.print("Robotics");  // TO PRINT ANY THINGS ON LCD.
LCD.setCursor(0,1);
LCD.print("AVINASH");
}
