#ifndef FAN_h
#define FAN_h

#include <Arduino.h>
/* #include <Wire.h> */

class Fan {
  private:
    int pin1;
    int pin2;
    int state;
  public:
    Fan(int FanPin1, int FanPin2);
    void begin();
    void Left();
    void Right();
    void off();
};

#endif