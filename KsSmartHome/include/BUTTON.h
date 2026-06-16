#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>
#include <Wire.h>
#include "Devices.h"

class Button {
  private:
    int pin;
    bool pressed;
  public:
    // Constructor
    Button(int ButtonPin);
    void begin();
    bool isPressed();
};

#endif