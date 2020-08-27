#include "Joystick.h"

Joystick::Joystick(int _upPin, int _downPin, int _leftPin, int _rightPin){
  upPin = _upPin;
  downPin = _downPin;
  leftPin = _leftPin;
  rightPin = _rightPin;
  pinMode(upPin, INPUT);
  pinMode(downPin, INPUT);
  pinMode(leftPin, INPUT);
  pinMode(rightPin, INPUT);
}
bool Joystick::getUp(){
  return digitalRead(upPin);
}
bool Joystick::getDown(){
  return digitalRead(downPin);
}
bool Joystick::getLeft(){
  return digitalRead(leftPin);
}
bool Joystick::getRight(){
  return digitalRead(rightPin);
}
