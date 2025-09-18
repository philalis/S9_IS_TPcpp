//
// Created by phila on 09/09/2025.
//

#include "SetOfPokemon.h"

void SetOfPokemon::display_pokemon() {
    for (auto* i:pokemon_vect) {
        std::cout<<"|"<<i->get_id()<<"\t|"<<i->get_name()<<"|"<<std::endl;
    }
}