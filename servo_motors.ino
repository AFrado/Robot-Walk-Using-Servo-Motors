#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

const int servoPin1 = 2;
const int servoPin2 = 3;
const int servoPin3 = 4;
const int servoPin4 = 5;
const int servoPin5 = 6;
const int servoPin6 = 7;
const int stepDelay = 500; 

void setup() {
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
  servo5.attach(servoPin5);
  servo6.attach(servoPin6);
}

void loop() {
  walk();
}

void walk(){
  servo1.write(90);  // Right hip forward 
  servo2.write(90);  // Right knee bent
  servo3.write(0);   // Left hip backward 
  servo4.write(0);   // Left knee straight
  servo5.write(90);  // Right ankle forward 
  servo6.write(0);   // Left ankle backward 
  delay(stepDelay);

  servo1.write(0);   // Right hip backward 
  servo2.write(0);   // Right knee straight
  servo3.write(90);  // Left hip forward 
  servo4.write(90);  // Left knee bent
  servo5.write(0);   // Right ankle backward 
  servo6.write(90);  // Left ankle forward 
  delay(stepDelay);
}