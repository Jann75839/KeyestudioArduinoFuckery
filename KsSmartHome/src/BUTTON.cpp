#include "BUTTON.h"

Button::Button(int ButtonPin){
     pin=ButtonPin;
     pressed = false;
    }
    void Button::begin() {
      pinMode(pin, INPUT_PULLUP);
    }

    bool Button::isPressed() {
      return digitalRead(pin) == LOW;
      pressed = digitalRead(pin) == LOW;
    }