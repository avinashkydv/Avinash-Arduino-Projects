// PROGRAM IS WRITTEN BY AVINASH.
// PROGRAM WRITTEN FOR MOTOR RUN FORWARD FOR 1 SEC AND REVERSE FOR 1 SEC AND STOP FOR 1 SEC.
void setup() {
  // put your setup code here, to run once:
  // we are seatting pin no 5 to (+ve) and pin 6 to (-ve).
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // motor run in one direction only. 
digitalWrite(5,HIGH);  // RUN MOTOR IN FORWARD DIRECTION.
digitalWrite(6,LOW);
delay(1000);  // DELAY FOR ONE SECOND.
// RUN MOTOR FOR REVERSE DIRECTION.
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
delay(1000);
// TO STOP MOTOR.
digitalWrite(5,LOW);
digitalWrite(6,LOW);
delay(1000);  // TO STOP MOTOR FOR ONE SECOND. CHANGE DELAY VALUE TO SEE EFFECT.
}
