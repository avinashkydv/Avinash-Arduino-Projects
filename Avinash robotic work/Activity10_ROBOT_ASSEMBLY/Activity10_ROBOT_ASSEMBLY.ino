void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);  // we are defineing the left motor.
pinMode(6,OUTPUT);
pinMode(10,OUTPUT);  // we are defineing the right motor.
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // we have to always write analogWrite command for robotics.
analogWrite(5,150); // to move wheels of the robot.of first motor.
analogWrite(6,0);  // 150 used for run slow of robot.
analogWrite(10,150); // to move the second motor.
analogWrite(11,0);

}
