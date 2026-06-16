#include "LED.h"

Lampe::Lampe(int LampePin){
    pin=LampePin;
    state=LOW;
}
void Lampe::begin(){
     pinMode(pin, OUTPUT);
}
void Lampe::on() {
     digitalWrite(pin, HIGH);
     state=HIGH;
}
void Lampe::off() {
     digitalWrite(pin, LOW);
     state=LOW;
}
void Lampe::toggle(){
     if (state==HIGH){
       off();
     }
else{
       on();
   }
}