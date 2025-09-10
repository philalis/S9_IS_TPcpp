//
// Created by phila on 09/09/2025.
//

#ifndef INTROCPP_POKEDEX_H
#define INTROCPP_POKEDEX_H
#include "SetOfpokemon.h"


class Pokedex : public SetOfPokemon{
    private :
        const std::string nomFichier = R"(C:\Users\phila\Downloads\pokedex.csv)";
        static Pokedex* pPokedex;
        Pokedex();
    public:
        static Pokedex getPokedex();

    Pokemon find_by_id(int id) override;
    Pokemon find_by_name(std::string name) override;
};


#endif //INTROCPP_POKEDEX_H