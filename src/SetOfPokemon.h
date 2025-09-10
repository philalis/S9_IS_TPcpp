//
// Created by phila on 09/09/2025.
//

#ifndef INTROCPP_SETOFPOKEMON_H
#define INTROCPP_SETOFPOKEMON_H
#include "Pokemon.hpp"
#include <vector>

class SetOfPokemon {

    protected:
        std::vector<Pokemon*> pokemon_vect;

    public:
        virtual ~SetOfPokemon() = default;

        virtual Pokemon find_by_id(int id) = 0;
    virtual Pokemon find_by_name(std::string name)=0;
    void display_pokemon();
};


#endif //INTROCPP_SETOFPOKEMON_H