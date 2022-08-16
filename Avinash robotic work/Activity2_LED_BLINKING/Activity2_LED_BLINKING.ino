// THIS PROGRAM IS WRITTEN BY AVINASH.
// THIS PROGRAM USED FOR LED BLINKING.
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);  //Set pin type.

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);  // used for glow LED.
delay(1000);       //  delay of one second.
digitalWrite(13,LOW); // used for OFF LED.
delay(1000);     // delay for one second.
// We can change delay value and can play with LED. just enjoy it @@.
}
