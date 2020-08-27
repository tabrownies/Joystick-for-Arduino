#include "Joystick.h"
const int LEFT = 3, RIGHT = 4, UP = 2, DOWN = 5;
Joystick joystick(UP, DOWN, LEFT, RIGHT);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(joystick.getLeft())
    Serial.println("LEFT");
  if(joystick.getRight())
    Serial.println("RIGHT");
  if(joystick.getUp())
    Serial.println("UP");
  if(joystick.getDown())
    Serial.println("DOWN");
}
