// PROGRAM IS WRITTEN BY AVINASH
// PROGRAM WRITTEN FOR MOTOR SPEED CONTROL.
// PROGRAM FOR MOTOR SPEED FULL ,HALF AND STOP FOR ONE SECOND EACH.
void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);  // SETTING MOTOR PIN.
pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// FOR FULL SPEED.......
analogWrite(5,255); 
analogWrite(6,0);
delay(1000);  // DELAY ONE SECOND..
// FOR HALF SPEED.......
analogWrite(5,127);  
analogWrite(6,0);
delay(1000);   // DELAY ONE SECOND..
//FOR STOP.....
analogWrite(5,0);
analogWrite(6,0);
delay(1000);    // DELAY ONE SECOND..
}
