// PROGRAM IS WRITTEN BY AVINASH.
// PROGRAM IS WORK FOR SENSOR BASED empty slot indicatator by using led glowing.

int slot1; // (A0) declearing sensor variable to store digital read value.
int slot2; // (A1)
int slot3;  // (A2)
int slot4;  // (A3)

void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);  // because sensor is input device 
pinMode(A1,INPUT);  
pinMode(A2,INPUT);
pinMode(A3,INPUT);
// setup for led.
pinMode(13,OUTPUT);  
pinMode(12,OUTPUT);  
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
slot1=digitalRead(A0);  // storing digital read value of senser in sensor variable.
slot2=digitalRead(A1);
slot3=digitalRead(A2);
slot4=digitalRead(A3);
// slot 1.
if(slot1==HIGH){
  digitalWrite(13,HIGH);  // led glow
}else{
  digitalWrite(13,LOW);   // led off.
}
//  slot 2.
if(slot2==HIGH){
  digitalWrite(12,HIGH);  // led glow
}else{
  digitalWrite(12,LOW);   // led off.
}
//  slot 3.
if(slot3==HIGH){
  digitalWrite(11,HIGH);  // led glow
}else{
  digitalWrite(11,LOW);   // led off.
}
//  slot 4.
if(slot4==HIGH){
  digitalWrite(10,HIGH);  // led glow
}else{
  digitalWrite(10,LOW);   // led off.
}
}
