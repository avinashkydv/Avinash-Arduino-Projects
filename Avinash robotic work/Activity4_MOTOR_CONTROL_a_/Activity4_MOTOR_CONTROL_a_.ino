// PROGRAM IS WRITTEN BY AVINASH.
// PROGRAM WRITTEN FOR CONTINOUS RUNNING FOR MOTOR.
void setup() {
  // put your setup code here, to run once:
  // we are seatting pin no 5 to (+ve) and pin 6 to (-ve).
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // motor run in one direction only.
  //if we want to reverse the direction than change HIGH to LOW and LOW TO HIGH.
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
}
