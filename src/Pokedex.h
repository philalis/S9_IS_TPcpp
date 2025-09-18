//
// Created by phila on 09/09/2025.
//

#ifndef INTROCPP_POKEDEX_H
#define INTROCPP_POKEDEX_H
#include "SetOfPokemon.h"


class Pokedex : public SetOfPokemon{
    private :
        const std::string nomFichier = R"(./extra/pokedex.csv)";
        static Pokedex* pPokedex;
        Pokedex();
    public:
        static Pokedex getPokedex();

    Pokemon find_by_id(int id) override;
    Pokemon find_by_name(std::string name) override;
};


#endif //INTROCPP_POKEDEX_H