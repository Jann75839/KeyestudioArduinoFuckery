#include "MUSIKPLAYER.h"
/* 

int fullNote = 1000;

void playTone(int note, int duration) {
      int durationMs = fullNote / duration;
      int pauseMs    = durationMs * 1.30;   // kurze Pause zwischen Noten
      
      tone(pin, note, durationMs);
      delay(pauseMs);
      noTone(pin);
    }

void playMelody(const Melody& m) {
      for (size_t i = 0; i < m.size; ++i) {
        playTone(m.notes[i].pitch, m.notes[i].duration);
      }
    } */






    MusikPlayer::MusikPlayer(int pinNumber, int fullNoteDuration = 1000) {
      pin      = pinNumber;
      fullNote = fullNoteDuration;
    }

    void MusikPlayer::begin() {
      pinMode(pin, OUTPUT);
    }

    // Tempo einstellen: fullNote = Dauer einer ganzen Note in ms
    void MusikPlayer::setFullNote(int duration) {
      fullNote = duration;
    }

    // Einzelne Note abspielen (blockierend)
    void MusikPlayer::playTone(int note, int duration) {
      int durationMs = fullNote / duration;
      int pauseMs    = durationMs * 1.30;   // kurze Pause zwischen Noten
      
      tone(pin, note, durationMs);
      delay(pauseMs);
      noTone(pin);
    }

    // Ganze Melodie abspielen (blockierend)
    // Während des Abspielens wartet der Arduino – Knöpfe werden nicht abgefragt!
    void MusikPlayer::playMelody(const Melody& m) {
      for (size_t i = 0; i < m.size; ++i) {
        playTone(m.notes[i].pitch, m.notes[i].duration);
      }
    }
