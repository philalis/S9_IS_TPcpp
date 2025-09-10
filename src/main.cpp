#include "main.hpp"

int main(){
    Pokedex pokedex = Pokedex::getPokedex();

    Pokemon pikachu = pokedex.find_by_id(25);
    pikachu.displayInfo();

    Pokemon bulbizarre = pokedex.find_by_name("bulbizarre");
    bulbizarre.displayInfo();


    pikachu.do_dmg(&bulbizarre);

    bulbizarre.displayInfo();


    return 0;
}