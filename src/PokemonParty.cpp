//
// Created by phila on 09/09/2025.
//

#include "PokemonParty.h"


void PokemonParty::addPokemonToParty(Pokemon p) {
     pokemon_vect.push_back(&p);
}

void PokemonParty::removePokemonFromParty(Pokemon p) {
     for (int i=0; i<pokemon_vect.size(); i++) {
          if (pokemon_vect[i]->get_name() == p.get_name()) {     //Si le nom est le même alors c'est le même pokemon, en supposant que l'on pas plusieurs fois le meme pokemon
               pokemon_vect.erase(pokemon_vect.begin()+i);
          }
     }
}

Pokemon PokemonParty::find_by_id(int id) {
     for (auto i : pokemon_vect) {
          if (i->get_id() == id) {
               return *i;
          }
     }
     std::cout <<"Couldn't find a pokemon with id "<<id<< std::endl;

     // something should be returned even if the id isn't found. but what ??
}
Pokemon PokemonParty::find_by_name(std::string name) {
     for (auto i : pokemon_vect) {
          if (i->get_name() == name) {
               return *i;
          }
     }
     std::cout <<"Couldn't find a pokemon with name "<<name<< std::endl;

     // something should be returned even if the name isn't found. but what ??
}

void PokemonParty::showParty() {
     std::cout << "Your party:" << std::endl;
     for (Pokemon* p : pokemon_vect) {
          p->displayInfo();
     }
}

PokemonParty::PokemonParty() {
     SetOfPokemon::pokemon_vect = {};
}
