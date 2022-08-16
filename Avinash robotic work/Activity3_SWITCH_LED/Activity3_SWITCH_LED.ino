// THIS PROGRAM IS WRITTEN BY AVINASH.
//THIS PROGRAM USED FOR SWITCHING LED.(WHEN WE PRESS LED THAN IT WILL GLOW).
int button;  //we are declearing button variable to store status of button.
void setup() {
  // put your setup code here, to run once:
  // Set pin according to type.
pinMode(A4,INPUT);  // SWITCH is input device so INPUT and pin number.
pinMode(3,OUTPUT);  // LED is output so OUTPUT.
}

void loop() {
  // put your main code here, to run repeatedly:
button=digitalRead(A4);// To read button status. this is digital input and output.
if(button==HIGH){  // checking input value is high
  digitalWrite(3,HIGH);
}else{        // checking input value is low
  digitalWrite(3,LOW);
}
}
