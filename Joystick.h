#include "Arduino.h"
#ifndef JOYSTICK_H
#define JOYSTICK_H

class Joystick{
  private:
    int upPin, downPin, leftPin, rightPin;
    bool upPressed, downPressed, leftPressed, rightPressed;
  public:
    Joystick(int _upPin, int _downPin, int _leftPin, int _rightPin);
    bool getUp();
    bool getDown();
    bool getLeft();
    bool getRight();
};

#endif
