//this program is written by Avinash.
// this program work with only one sensor (middle sinsor).
// and it will run forward and stop.
// declearing variable for store sensor value.
int sensor;
//left motor.
int lmt1=6;   // change pin according to Auton shield.
int lmt2=5;
// right motor.
int rmt1=10;  
int rmt2=11;
// if motor are not run in reverse direction than simply
// interchange the pin number lnt1=6 and lmt2=5.like that.
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);   // in AUTON shield connect pin no 8
pinMode(lmt1,OUTPUT);  // we are defineing the left motor.
pinMode(lmt2,OUTPUT);
pinMode(rmt1,OUTPUT);  // we are defineing the right motor.
pinMode(rmt2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor=digitalRead(A0);   // for AUTON Shield change pin number no to 8.
if(sensor==HIGH){
  stp();
}else{
  forward();
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
