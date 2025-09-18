//
// Created by phila on 11/09/2025.
//

#ifndef INTROCPP_POKEMONATTACK_H
#define INTROCPP_POKEMONATTACK_H
#include "SetOfPokemon.h"


class PokemonAttack :public SetOfPokemon {
private:
    const int maxNbPokemon = 6;

public:
    PokemonAttack();

    void addPokemon(Pokemon p);
    void removePokemon(Pokemon p);

    Pokemon find_by_id(int id) override;
    Pokemon find_by_name(std::string name) override;



};


#endif //INTROCPP_POKEMONATTACK_H