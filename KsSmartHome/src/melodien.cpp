#include "melodien.h"

// Definitionen der Melodie-Arrays
Note test_melody[] = {
  { NOTE_C4, 4 },
  { NOTE_G3, 8 },
  { NOTE_G3, 8 },
  { NOTE_A3, 4 },
  { NOTE_G3, 4 },
  { 0,       4 },  // Pause
  { NOTE_B3, 4 },
  { NOTE_C4, 4 }
};

Note crystal_castles_kerosene[] = {
  { NOTE_G4, 4 }, { NOTE_AS4, 3 }, { NOTE_C5, 4 }, { NOTE_D5, 4 }, { NOTE_D5, 2 }, { NOTE_C5, 3 }, { NOTE_DS5, 4 }, { NOTE_D5, 1 },
  { NOTE_D5, 3 }, { NOTE_C5, 4 }, { NOTE_C5, 2 }, { NOTE_AS4, 4 }, { NOTE_A4, 3 }, { NOTE_AS4, 4 }, { NOTE_AS4, 1 },
  { NOTE_AS4, 3 }, { NOTE_C5, 4 }, { NOTE_D5, 1 },

  { NOTE_D5, 4 }, { NOTE_D5, 3 }, { NOTE_DS5, 4 }, { NOTE_D5, 4 }, { NOTE_DS5, 4 },
  { NOTE_DS5, 8 }, { NOTE_DS5, 8 }, { NOTE_C5, 8 }, { NOTE_DS5, 8 }, { NOTE_C5, 8 }, { NOTE_C5, 8 }, { NOTE_D5, 8 }, { NOTE_C5, 8 }, { NOTE_D5, 8 }, { NOTE_D5, 8 }, { NOTE_AS4, 8 }, { NOTE_D5, 8 },
  { NOTE_AS4, 8 }, { NOTE_AS4, 8 }, { NOTE_A4, 8 }, { NOTE_AS4, 8 }, { NOTE_A4, 8 }, { NOTE_A4, 8 }, { NOTE_AS4, 8 }, { NOTE_A4, 8 }, { NOTE_AS4, 8 }, { NOTE_AS4, 8 }, { NOTE_G4, 8 }, { NOTE_AS4, 8 },
  { NOTE_G4, 8 }, { NOTE_G4, 8 }, { NOTE_F4, 8 }, { NOTE_G4, 8 }, { NOTE_F4, 8 }, { NOTE_F4, 8 },

  { NOTE_C5, 4 },
  { NOTE_C5, 8 }, { NOTE_C5, 8 }, { NOTE_C5, 8 }, { NOTE_C5, 8 }, { NOTE_C5, 8 }, { NOTE_C5, 8 }, { NOTE_D5, 8 }, { NOTE_C5, 8 }, { NOTE_D5, 8 }, { NOTE_D5, 8 },
  { NOTE_F5, 8 }, { NOTE_D5, 8 }, { NOTE_F5, 8 }, { NOTE_F5, 8 }, { NOTE_D5, 8 }, { NOTE_F5, 8 }, { NOTE_D5, 8 }, { NOTE_D5, 8 }, { NOTE_C5, 8 }, { NOTE_D5, 8 },
  { NOTE_C5, 8 }, { NOTE_C5, 8 }, { NOTE_AS4, 8 }, { NOTE_C5, 8 }, { NOTE_AS4, 8 }, { NOTE_AS4, 8 }, { NOTE_D5, 8 }, { NOTE_C5, 8 }, { NOTE_D5, 8 }, { NOTE_D5, 8 },

  { NOTE_DS5, 4 },
  { NOTE_DS5, 8 }, { NOTE_DS5, 8 }, { NOTE_C5, 8 }, { NOTE_DS5, 8 }, { NOTE_C5, 8 }, { NOTE_C5, 8 }, { NOTE_D5, 8 }, { NOTE_C5, 8 }, { NOTE_D5, 8 }, { NOTE_D5, 8 },
  { NOTE_AS4, 8 }, { NOTE_D5, 8 }, { NOTE_AS4, 8 }, { NOTE_AS4, 8 }, { NOTE_A4, 8 }, { NOTE_AS4, 8 }, { NOTE_A4, 8 }, { NOTE_A4, 8 }, { NOTE_AS4, 8 }, { NOTE_A4, 8 },
  { NOTE_AS4, 8 }, { NOTE_AS4, 8 }, { NOTE_G4, 8 }, { NOTE_AS4, 8 }, { NOTE_G4, 8 }, { NOTE_G4, 8 }, { NOTE_F4, 8 }, { NOTE_G4, 8 }, { NOTE_F4, 8 }, { NOTE_F4, 8 },

  { 0, 1 }
};

Note was_wollen_wir_trinken[] = {
  { NOTE_A4, 4 }, { NOTE_C5, 4 }, { NOTE_D5, 4 }, { NOTE_E5, 3 }, { NOTE_E5, 3 }, { NOTE_F5, 4 }, { NOTE_D5, 4 }, { NOTE_E5, 2 }, { 0, 4 },
  { NOTE_D5, 4 }, { NOTE_D5, 6 }, { NOTE_C5, 6 }, { NOTE_B4, 6 }, { NOTE_C5, 2 }, { NOTE_A4, 3 }, { 0, 8 }, { NOTE_A4, 4 },
  { NOTE_D5, 4 }, { NOTE_D5, 4 }, { NOTE_C5, 4 }, { NOTE_B4, 4 },
  { NOTE_D5, 4 }, { NOTE_D5, 6 }, { NOTE_C5, 6 }, { NOTE_B4, 6 },
  { NOTE_C5, 2 }, { NOTE_A4, 3 }, { 0, 8 }, { NOTE_G4, 2 }, { NOTE_A4, 1 }
};

Note jujutsu_kaisen[] = {
  { NOTE_A4, 4 }, { NOTE_FS4, 4 }, { NOTE_FS4, 4 }, { NOTE_A4, 2 }, { NOTE_FS4, 3 }, { 0, 6 },
  { NOTE_FS4, 4 }, { NOTE_CS5, 4 }, { NOTE_CS5, 4 }, { NOTE_B4, 6 }, { NOTE_A4, 6 }, { NOTE_FS4, 3 }, { 0, 3 },
  { NOTE_FS4, 4 }, { NOTE_CS5, 4 }, { NOTE_CS5, 4 }, { NOTE_B4, 6 }, { NOTE_A4, 6 }, { NOTE_FS4, 3 }, { 0, 3 },
  { NOTE_FS3, 4 }, { NOTE_CS4, 4 }, { NOTE_CS4, 4 }, { NOTE_B3, 6 }, { NOTE_A3, 6 }, { NOTE_FS3, 3 }, { 0, 3 },
  { NOTE_A4, 4 }, { NOTE_FS4, 4 }, { NOTE_FS4, 4 }, { NOTE_A4, 2 }, { NOTE_FS4, 3 }, { 0, 6 },
  { NOTE_B4, 4 }, { NOTE_CS5, 2 }, { NOTE_B4, 4 }, { NOTE_CS5, 2 }, { NOTE_B4, 4 }, { NOTE_CS5, 4 },
  { NOTE_A4, 4 }, { NOTE_B4, 4 }, { NOTE_A4, 4 }, { NOTE_B4, 4 }, { NOTE_FS4, 4 }, { NOTE_A4, 4 },
  { NOTE_B4, 4 }, { NOTE_CS5, 2 }, { NOTE_B4, 4 }, { NOTE_CS5, 2 },

  { 0, 1 }
};

Note godfather_melody[] = {
  { 0, 4 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { NOTE_E4, 8 }, { NOTE_A4, 8 }, { NOTE_C5, 8 },
  { NOTE_B4, 8 }, { NOTE_A4, 8 }, { NOTE_C5, 8 }, { NOTE_A4, 8 }, { NOTE_B4, 8 }, { NOTE_A4, 8 }, { NOTE_F4, 8 }, { NOTE_G4, 8 },
  { NOTE_E4, 2 }, { NOTE_E4, 8 }, { NOTE_A4, 8 }, { NOTE_C5, 8 },
  { NOTE_B4, 8 }, { NOTE_A4, 8 }, { NOTE_C5, 8 }, { NOTE_A4, 8 }, { NOTE_C5, 8 }, { NOTE_A4, 8 }, { NOTE_E4, 8 }, { NOTE_DS4, 8 },

  { NOTE_D4, 2 }, { NOTE_D4, 8 }, { NOTE_F4, 8 }, { NOTE_GS4, 8 },
  { NOTE_B4, 2 }, { NOTE_D4, 8 }, { NOTE_F4, 8 }, { NOTE_GS4, 8 },
  { NOTE_A4, 2 }, { NOTE_C4, 8 }, { NOTE_C4, 8 }, { NOTE_G4, 8 },
  { NOTE_F4, 8 }, { NOTE_E4, 8 }, { NOTE_G4, 8 }, { NOTE_F4, 8 }, { NOTE_F4, 8 }, { NOTE_E4, 8 }, { NOTE_E4, 8 }, { NOTE_GS4, 8 },

  { NOTE_A4, 2 }, { 0, 8 }, { NOTE_A4, 8 }, { NOTE_A4, 8 }, { NOTE_GS4, 8 },
  { NOTE_G4, 2 }, { NOTE_B4, 8 }, { NOTE_A4, 8 }, { NOTE_F4, 8 },
  { NOTE_E4, 2 }, { NOTE_E4, 8 }, { NOTE_G4, 8 }, { NOTE_E4, 8 },
  { NOTE_D4, 2 }, { NOTE_D4, 8 }, { NOTE_D4, 8 }, { NOTE_F4, 8 }, { NOTE_DS4, 8 },

  { NOTE_E4, 2 }, { 0, 8 }, { NOTE_E4, 8 }, { NOTE_A4, 8 }, { NOTE_C5, 8 },

  { NOTE_B4, 8 }, { NOTE_A4, 8 }, { NOTE_C5, 8 }, { NOTE_A4, 8 }, { NOTE_B4, 8 }, { NOTE_A4, 8 }, { NOTE_F4, 8 }, { NOTE_G4, 8 },
  { NOTE_E4, 2 }, { NOTE_E4, 8 }, { NOTE_A4, 8 }, { NOTE_C5, 8 },
  { NOTE_B4, 8 }, { NOTE_A4, 8 }, { NOTE_C5, 8 }, { NOTE_A4, 8 }, { NOTE_C5, 8 }, { NOTE_A4, 8 }, { NOTE_E4, 8 }, { NOTE_DS4, 8 },

  { NOTE_D4, 2 }, { NOTE_D4, 8 }, { NOTE_F4, 8 }, { NOTE_GS4, 8 },
  { NOTE_B4, 2 }, { NOTE_D4, 8 }, { NOTE_F4, 8 }, { NOTE_GS4, 8 },
  { NOTE_A4, 2 }, { NOTE_C4, 8 }, { NOTE_C4, 8 }, { NOTE_G4, 8 },
  { NOTE_F4, 8 }, { NOTE_E4, 8 }, { NOTE_G4, 8 }, { NOTE_F4, 8 }, { NOTE_F4, 8 }, { NOTE_E4, 8 }, { NOTE_E4, 8 }, { NOTE_GS4, 8 },

  { NOTE_A4, 2 }, { 0, 8 }, { NOTE_A4, 8 }, { NOTE_A4, 8 }, { NOTE_GS4, 8 },
  { NOTE_G4, 2 }, { NOTE_B4, 8 }, { NOTE_A4, 8 }, { NOTE_F4, 8 },
  { NOTE_E4, 2 }, { NOTE_E4, 8 }, { NOTE_G4, 8 }, { NOTE_E4, 8 },
  { NOTE_D4, 2 }, { NOTE_D4, 8 }, { NOTE_D4, 8 }, { NOTE_F4, 8 }, { NOTE_DS4, 8 },

  { NOTE_E4, 2 }
};

// Definitionen der Melody-Wrapper
const Melody CRYSTAL_CASTLES      = { crystal_castles_kerosene, ARRAY_SIZE(crystal_castles_kerosene)    };
const Melody WAS_WOLLEN_WIR_TRINKEN = { was_wollen_wir_trinken,   ARRAY_SIZE(was_wollen_wir_trinken)    };
const Melody JUJUTSU_KAISEN        = { jujutsu_kaisen,            ARRAY_SIZE(jujutsu_kaisen)            };
const Melody GODFATHER             = { godfather_melody,          ARRAY_SIZE(godfather_melody)          };
