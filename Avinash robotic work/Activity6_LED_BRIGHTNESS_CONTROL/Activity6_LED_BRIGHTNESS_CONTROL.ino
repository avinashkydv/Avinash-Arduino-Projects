// PROGRAM IS WRITTEN BY AVINASH
// PROGRAM FOR LED BRIGHTNESS CONTROL.
// PROGRAM WRITTEN FOR LED GLOW FULL BRIGHT,HALF BRIGHT,AND OFF FOR ONE SECOND.
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);  //LED IS OUTPUT DEVICE.
}

void loop() {
  // put your main code here, to run repeatedly:
  // FULL BRIGHTNESS....
analogWrite(3,255);  // similar to digitalWrite(3,HIGH);
delay(1000);    // DELAY ONE SECOND..
// HALF BRIGHTNESS.....
analogWrite(3,128);
delay(1000);    // DELAY ONE SECOND..
// OFF....
analogWrite(3,0);    // similar to digitalWrite(3,LOW);
delay(1000);    // DELAY ONE SECOND..
}
