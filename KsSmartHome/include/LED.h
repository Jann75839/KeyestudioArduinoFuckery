#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Lampe {
  private:
    int pin;
    int state;
  public:
  // Constructor
    Lampe(int LampePin);
    void begin();
    void on();
    void off();
    void toggle();
};

#endif