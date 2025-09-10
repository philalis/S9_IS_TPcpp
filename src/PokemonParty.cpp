//
// Created by phila on 09/09/2025.
//

#include "PokemonParty.h"


void PokemonParty::addPokemonToParty(Pokemon p) {
     pokemon_vect.push_back(&p);
}

void PokemonParty::removePokemonFromParty(Pokemon p) {
     for (int i=0; i<pokemon_vect.size(); i++) {
          if (pokemon_vect[i] == &p) {
               pokemon_vect.erase(pokemon_vect[i]);

          }
     }
}

