// PROGRAM IS WRITTEN BY AVINASH.
// PROGRAM IS WORK FOR SENSOR BASED MOTOR CONTROL.
int sensor;   // declearing sensor variable to store digital read value.
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);  // because sensor is input device 
pinMode(5,OUTPUT);   // motors are output device.
pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensor=digitalRead(A0);  // storing digital read value of senser in sensor variable.
if(sensor==HIGH){
  digitalWrite(5,HIGH);  // run motor.
  digitalWrite(6,LOW);
}else{
  digitalWrite(5,LOW);   // stop motor.
  digitalWrite(6,LOW);
}
}
