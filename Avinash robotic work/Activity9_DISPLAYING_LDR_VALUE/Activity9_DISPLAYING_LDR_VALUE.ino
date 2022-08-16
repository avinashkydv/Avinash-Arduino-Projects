#include<LiquidCrystal.h>   // complsury to include header for LCD.
LiquidCrystal LCD(13,12,8,7,4,2); // WRITE PIN SERIAL NUMBER.
int LDR;
void setup() {
  // put your setup code here, to run once:
LCD.begin(16,2); // WE HAVE TO SPECIFY SIZE OF LCD(16,2);
pinMode(A3,INPUT); // SETTING LDR SENSOR CONNECTED WITH PIN A3.
}

void loop() {
  // put your main code here, to run repeatedly:
LDR=analogRead(A3);  // STORING ANALOG VALUE I LDR VARIABLE.
LCD.clear();  // clear LCD screen.
// when we not put clear function than output come wrong for LDR value.
LCD.setCursor(0,0);  // TO SET CURSOR FOR PROPER OUTPUT.
LCD.print("LDR Value:");  // TO PRINT ANY THINGS ON LCD.
LCD.setCursor(0,1);
LCD.print(LDR);  // printing LDR value recive by sensor.
}
