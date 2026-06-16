#include"GENERICSENSOR.h"


    GenericSensor::GenericSensor(int GenericSensorPin){
    pin=GenericSensorPin;
  }
  
    int GenericSensor::getValue(){
      return analogRead (pin);
    }
