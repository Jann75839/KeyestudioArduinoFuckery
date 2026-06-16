#ifndef MELODIEN_H
#define MELODIEN_H

#include <stddef.h>
#include "pitches.h"

// Helper: Anzahl Elemente eines statischen Arrays
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

// Definition einer Note mit Tonhöhe und Dauer
struct Note {
  int pitch;
  int duration;
};

// Wrapper für Melodien (Zeiger auf Noten-Array + Länge)
struct Melody {
  const Note* notes;   // * ist ein so genannter Zeiger auf statisches Array von Noten
  size_t size;
};

// Deklarationen der Melodie-Arrays (Definitionen in melodien.cpp)
extern Note test_melody[];
extern Note crystal_castles_kerosene[];
extern Note was_wollen_wir_trinken[];
extern Note jujutsu_kaisen[];
extern Note godfather_melody[];

// Deklarationen der Melody-Wrapper (Definitionen in melodien.cpp)
extern const Melody CRYSTAL_CASTLES;
extern const Melody WAS_WOLLEN_WIR_TRINKEN;
extern const Melody JUJUTSU_KAISEN;
extern const Melody GODFATHER;




#endif