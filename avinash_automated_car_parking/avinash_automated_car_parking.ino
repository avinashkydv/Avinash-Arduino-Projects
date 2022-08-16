#include <Servo.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,8,7,4,2); //connected to LCD display.
Servo myservo;  // servo variable.

#define ServoM A0       //Pin connected to the servo motor.
#define Exit A1         //Pin connected to the EXIT sensor.
//#define In A2           //Pin connected to the IN sensor.
#define BarLow 75       //Low position of the barrier.
#define BarUp 160       //Up position of the barrier.
#define CAPACITY 4      //Capacity of the parking slot.

//int  Available = 4;     //Number of places available.
int Available=0;
int temp=0;
const int ldr_pin=A3;   // pin to ldr.
const int led_pin=11;   // led pin for automatic light.
int In=0;
//##########################################################################  delay(3000);

// Setup of all pin in project.
void setup() {
  myservo.attach(ServoM);          // attaches the servo.
  lcd.begin(16,2);
  pinMode(ServoM,OUTPUT);
  pinMode(Exit,INPUT);           // set "EXIT" sensor pin to input
  pinMode(In,INPUT);             // set "IN" sensor pin to input
  myservo.write(BarLow);          //Barrier in the low position
  // delay(1000);
  pinMode(ldr_pin,INPUT);
  pinMode(led_pin,OUTPUT);
// To display smart parking system banner at the top.
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
   In=0;
}

//##########################################################################

void loop(){
  
//****************** Code for automatic street light. ********************* 
//lcd.print(ldr_pin);
//delay(1000);
 if(digitalRead(ldr_pin)==1){
    digitalWrite(led_pin,HIGH);
  }else{
    digitalWrite(led_pin,LOW);
  }
//**************************************************************************

// **********Code for parking system **************************************
/*
int count=0;
 count=digitalRead(In);
// if(digitalRead(In)){  // If the IN sensor detects a car at the entrance.
if(count){
  //lcd.setCursor(0,1);
  lcd.print(count);
  delay(3000);

*/




 



   if(digitalRead(In)==1){
    int count=0;
    
//if(count){  // If the IN sensor detects a car at the entrance.
delay(4000);
//if(Available==4){
if(digitalRead(In)==LOW){
//  count=digitalRead(In);
  myservo.write(BarUp);  // lift the barrier up.
  delay(4000);  // delay of four second.
  myservo.write(BarLow); // Lower the barrier after entery.
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print("EMPTY PLACES= ");
  lcd.print(Available);
  
   delay(4000);
   Available++;
    //Available--;
}else if(digitalRead(In)==HIGH){
//  count=digitalRead(In);
  myservo.write(BarUp);  // lift the barrier up.
  delay(4000);  // delay of four second.
  myservo.write(BarLow); // Lower the barrier after entery.
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print("EMPTY PLACES= ");
  lcd.print(Available);
  
   delay(4000);
   Available++;
    //Available--;
}


/*
else if(Available==3){
  count=digitalRead(In);
  myservo.write(BarUp);  // lift the barrier up.
  delay(4000);  // delay of four second.
  myservo.write(BarLow); // Lower the barrier after entery.
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print("EMPTY PLACES= ");
  lcd.print(Available);
   delay(4000);
   //Available--;
}else if(Available==2){
  count=digitalRead(In);
  myservo.write(BarUp);  // lift the barrier up.
  delay(4000);  // delay of four second.
  myservo.write(BarLow); // Lower the barrier after entery.
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print("EMPTY PLACES= ");
  lcd.print(Available);
   delay(4000);
   // Available--;
}else if(Available==1){
  count=digitalRead(In);
  myservo.write(BarUp);  // lift the barrier up.
  delay(4000);  // delay of four second.
  myservo.write(BarLow); // Lower the barrier after entery.
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print("EMPTY PLACES= ");
  lcd.print(Available);
   delay(4000);
   // Available--;
}else{
  myservo.write(BarLow);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print(" SOORY FULL!!!");
}
//Available--;
}
 */}
  
  
 /*
//If the Exit sensor detects a car at the exit.
if(digitalRead(Exit)){  
if(Available==4){
  
  myservo.write(BarUp);  // lift the barrier up.
  delay(4000);  // delay of four second.
  myservo.write(BarLow); // Lower the barrier after entery.
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print("EMPTY PLACES= ");
  lcd.print(Available);
   delay(4000);
   Available++;
}else if(Available==3){
  
  myservo.write(BarUp);  // lift the barrier up.
  delay(4000);  // delay of four second.
  myservo.write(BarLow); // Lower the barrier after entery.
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print("EMPTY PLACES= ");
  lcd.print(Available);
   delay(4000);
   Available++;
}else if(Available==2){
  
  myservo.write(BarUp);  // lift the barrier up.
  delay(4000);  // delay of four second.
  myservo.write(BarLow); // Lower the barrier after entery.
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print("EMPTY PLACES= ");
  lcd.print(Available);
   delay(4000);
   Available++;
}else if(Available==1){
  
  myservo.write(BarUp);  // lift the barrier up.
  delay(4000);  // delay of four second.
  myservo.write(BarLow); // Lower the barrier after entery.
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print("EMPTY PLACES= ");
  lcd.print(Available);
   delay(4000);
   Available++;
}else{
  myservo.write(BarLow);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print(" SOORY FULL!!!");
}
  
}
else{
  myservo.write(BarLow);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");
  lcd.setCursor(0,1);
  lcd.print("EMPTY PLACES= ");
  lcd.print(Available);
   delay(4000);
  
}
*/
}

