#include "FAN.h"

    Fan::Fan(int FanPin1, int FanPin2){
      pin1=FanPin1;
      pin2=FanPin2;
    }
    void Fan::begin(){
      pinMode(pin1, OUTPUT);
      pinMode(pin2, OUTPUT);
    }
    void Fan::Left(){
      digitalWrite(pin1, HIGH);
      digitalWrite(pin2, LOW);
      state=HIGH;
    }
    void Fan::Right(){
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, HIGH);
      state=HIGH;
    }
    
    void Fan::off(){
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, LOW);
      state=LOW;
    }
