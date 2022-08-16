// declearing variable for store sensor value.
int ls;  // left sensor.
int cs;  // center sensor.
int rs;  // right sensor.
//left motor.
int lmt1=6; // change pin according to auton shield.
int lmt2=5;
// right motor.
int rmt1=10;  
int rmt2=11;
void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);   // pin 7 for left sensor.
pinMode(8,INPUT);   // pin 8 for center sensor. 
pinMode(9,INPUT);   // pin 9 for right sensor.
pinMode(lmt1,OUTPUT);  // we are defineing the left motor.
pinMode(lmt2,OUTPUT);
pinMode(rmt1,OUTPUT);  // we are defineing the right motor.
pinMode(rmt2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// assign sensor input value in variable of sensor.
ls=digitalRead(7);
cs=digitalRead(8);
rs=digitalRead(9);
if(ls==LOW&&cs==LOW&&rs==LOW){
  forward();
}else if(ls==HIGH&&cs==LOW&&rs==LOW){
  right();
}else if(ls==LOW&&cs==LOW&&rs==HIGH){
  left();
}else if(ls==LOW&&cs==HIGH&&rs==LOW){
  reverse();
  delay(200);
  left();
  delay(200);
}else if(ls==HIGH&&cs==HIGH&&rs==LOW){
  reverse();
  delay(200);
  right();
  delay(200);
}else if(ls==LOW&&cs==HIGH&&rs==HIGH){
  reverse();
  delay(200);
  left();
  delay(200);
}else if(ls==HIGH&&cs==LOW&&rs==HIGH){
  reverse();
  delay(200);
  left();
  delay(200);
}else if(ls==HIGH&&cs==HIGH&&rs==HIGH){
  reverse();
  delay(200);
  left();
  delay(200);
}

}


// user define function for run robot.
// for forward direction.
void forward(){
analogWrite(lmt1,150); // to move wheels of the robot.of first motor.
analogWrite(lmt2,0);  // 150 used for run slow of robot.
analogWrite(rmt1,150); // to move the second motor.
analogWrite(rmt2,0);
}
// for reverse direction.
void reverse(){
analogWrite(lmt1,0); // to move wheels of the robot.of first motor.
analogWrite(lmt2,150);  // 150 used for run slow of robot.
analogWrite(rmt1,0); // to move the second motor.
analogWrite(rmt2,150);
}
// for left direction.
void left(){
analogWrite(lmt1,0); // to move wheels of the robot.of first motor.
analogWrite(lmt2,150);  // 150 used for run slow of robot.
analogWrite(rmt1,150); // to move the second motor.
analogWrite(rmt2,0);
}
// for right direction.
void right(){
analogWrite(lmt1,150); // to move wheels of the robot.of first motor.
analogWrite(lmt2,0);  // 150 used for run slow of robot.
analogWrite(rmt1,0); // to move the second motor.
analogWrite(rmt2,150);
}
// for STOP.
void stp(){
analogWrite(lmt1,0); // to move wheels of the robot.of first motor.
analogWrite(lmt2,0);  
analogWrite(rmt1,0); // to move the second motor.
analogWrite(rmt2,0);
}
// STOP left.
void stpleft(){
analogWrite(lmt1,0); // to move wheels of the robot.of first motor.
analogWrite(lmt2,0);  // 150 used for run slow of robot.
analogWrite(rmt1,150); // to move the second motor.
analogWrite(rmt2,0);
}
// STOP Right.
void stpright(){
analogWrite(lmt1,150); // to move wheels of the robot.of first motor.
analogWrite(lmt2,0);  // 150 used for run slow of robot.
analogWrite(rmt1,0); // to move the second motor.
analogWrite(rmt2,0);
}
