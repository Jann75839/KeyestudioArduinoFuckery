#include <Arduino.h>

class Button {
  private:
    int pin;
    bool pressed;
  public:
    // Constructor
    Button(int ButtonPin){
     pin=ButtonPin;
     pressed = false;
    }
    void begin() {
      pinMode(pin, INPUT_PULLUP);
    }

    bool isPressed() {
      return digitalRead(pin) == LOW;
      pressed = digitalRead(pin) == LOW;
    }
};