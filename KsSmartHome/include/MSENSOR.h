#ifndef MSENSOR_H
#define MSENSOR_H

#include <Arduino.h>

class MSensor {
  private:
    int pin;
    int state;
  public:
    MSensor(int MSensorPin);
    int getMove();
};

#endif