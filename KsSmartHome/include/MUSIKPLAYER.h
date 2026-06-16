#ifndef MUSIKPLAYER_H
#define MUSIKPLAYER_H
#include <Arduino.h>
#include "melodien.h"

class MusikPlayer {
  private:
    int pin;
    int fullNote;   // Dauer einer ganzen Note in ms

  public:

    MusikPlayer(int pinNumber, int fullNoteDuration = 1000);

    void begin();

    // Tempo einstellen: fullNote = Dauer einer ganzen Note in ms
    void setFullNote(int duration);

    // Einzelne Note abspielen (blockierend)
    void playTone(int note, int duration);

    // Ganze Melodie abspielen (blockierend)
    // Während des Abspielens wartet der Arduino – Knöpfe werden nicht abgefragt!
    void playMelody(const Melody& m);
};

#endif