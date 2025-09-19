#include "main.hpp"

#include "PokemonParty.h"

int main(){
    Pokedex pokedex = Pokedex::getPokedex();

    Pokemon pikachu = pokedex.find_by_id(25);
    pikachu.displayInfo();

    Pokemon bulbizarre = pokedex.find_by_name("Bulbasaur");
    bulbizarre.displayInfo();

    PokemonParty party = PokemonParty();
    party.addPokemonToParty(pikachu);
    party.addPokemonToParty(bulbizarre);

    pikachu.do_dmg(&bulbizarre);
    bulbizarre.displayInfo();



    party.showParty();
    party.removePokemonFromParty(pokedex.find_by_name("Pikachu"));
    std::cout << "" << std::endl;
    party.showParty();


    Pokemon gengar = pokedex.find_by_name("Gengar");
    Pokemon nidorino = pokedex.find_by_name("Nidorino");
    party.addPokemonToParty(gengar);
    party.addPokemonToParty(nidorino);
    gengar.do_dmg(&nidorino);


    return 0;
}
