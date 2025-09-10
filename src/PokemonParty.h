//
// Created by phila on 09/09/2025.
//

#ifndef INTROCPP_POKEMONPARTY_H
#define INTROCPP_POKEMONPARTY_H
#include "SetOfpokemon.h"


class PokemonParty : public SetOfPokemon{

    public:
    PokemonParty();
    void addPokemonToParty(Pokemon p);
    void removePokemonFromParty(Pokemon p);

    ~PokemonParty();
};



#endif //INTROCPP_POKEMONPARTY_H