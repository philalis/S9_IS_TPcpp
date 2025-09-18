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

    Pokemon find_by_id(int id) override;
    Pokemon find_by_name(std::string name) override;

    void showParty();
};



#endif //INTROCPP_POKEMONPARTY_H