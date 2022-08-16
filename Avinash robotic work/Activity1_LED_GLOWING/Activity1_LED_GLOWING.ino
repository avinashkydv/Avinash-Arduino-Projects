// THIS PROGRAM IS WRITTEN BY AVINASH 
// THIS PROGRAM USED TO GLOWING AN LED.
void setup() {
  // put your setup code here, to run once:
  // Syntax for PINMODE is   
  // pinMode(Pin number,OUTPUT/INPUT);  
pinMode(13,OUTPUT); // In this we declear type of device(INPUT/OUTPUT).AND pin no connected to it.
//digitalWrite(13,HIGH); // We can write this code here also but it will glow always.
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite used for send output.
  //Syntax for Digital write.
  // digitalWrite(13,HIGH/LOW);
digitalWrite(13,HIGH); // To send output to pin and HIGH used for flow LED.
}
