#ifndef GENERICSENSOR_H
#define GENERICSENSOR_H

#include <Arduino.h>

class GenericSensor {
  private:
    int pin;
    int state;
  public:
    GenericSensor(int GenericSensorPin);
    int getValue();
};

#endif