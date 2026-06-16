#include "MSENSOR.h"

    MSensor::MSensor(int MSensorPin){
    pin=MSensorPin;
  }
    int MSensor::getMove(){
      return digitalRead (pin) == 1;
    }