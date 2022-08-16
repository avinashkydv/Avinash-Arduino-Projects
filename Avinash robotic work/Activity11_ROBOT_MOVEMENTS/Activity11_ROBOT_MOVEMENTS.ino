//left motor.
int lmt1=6; 
int lmt2=5;
// right motor.
int rmt1=10;  
int rmt2=11;
// if motor are not run in reverse direction than simply
// interchange the pin number lnt1=6 and lmt2=5.like that.
void setup() {
  // put your setup code here, to run once:
pinMode(lmt1,OUTPUT);  // we are defineing the left motor.
pinMode(lmt2,OUTPUT);
pinMode(rmt1,OUTPUT);  // we are defineing the right motor.
pinMode(rmt2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
forward();
delay(1000);
reverse();
delay(1000);
left();
delay(1000);
right();
delay(1000);
stp();
delay(1000);
stpleft();
delay(1000);
stpright();
delay(1000);
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
