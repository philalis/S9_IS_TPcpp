#include "Pokemon.hpp"

#include <iostream>
#include <fstream>
#include <string>

#include <utility>

int Pokemon::pokemon_count = 0;

Pokemon::Pokemon(int id, const string& name, double maxHitPoint, double attack,
    double defense): id(id), name(name),maxHitPoint(maxHitPoint),attack(attack),defense(defense){
        evolution =0;
        hitPoint = maxHitPoint;
        //std::cout<<"Ici le contructeur parametre"<<std::endl;
        pokemon_count++;
}
    
Pokemon::Pokemon(const Pokemon &otherPokemon): id(otherPokemon.id),name(otherPokemon.name),maxHitPoint(otherPokemon.maxHitPoint),hitPoint(otherPokemon.hitPoint),attack(otherPokemon.attack),
        defense(otherPokemon.defense), evolution(otherPokemon.evolution) {
    pokemon_count++;
    //std::cout<<"Ici le constructeur de recopie"<<std::endl;
}

Pokemon::~Pokemon(){
    //std::cout<<"Ici le destructeur."<<std::endl;
    pokemon_count--;
}

void Pokemon::displayInfo() const{
    std::cout<<"id : "<< this->id<<std::endl;
    std::cout<<"name : "<< this->name<<std::endl;
    std::cout<<"hitPoint : "<< this->hitPoint<<std::endl;
    std::cout<<"attack : "<< this->attack<<std::endl;
    std::cout<<"defense : "<< this->defense<<std::endl;
    std::cout<<"evolution : "<< this->evolution<<std::endl;
}


int Pokemon::get_id() const{
    return id;
}
string Pokemon::get_name(){
    return name;
}
double Pokemon::get_hitPoint() const{
    return hitPoint;
}
double Pokemon::get_attack() const{
    return attack;
}
double Pokemon::get_defense() const{
    return defense;
}
int Pokemon::get_evolution() const{
    return evolution;
}

double Pokemon::get_damaged(double dmg) {
    hitPoint -= dmg;

    if (hitPoint <= 0) {
        hitPoint = 0;   //Can be redundant, but enables to deal with death here.
        std::cout<<name<<" got killed"<<std::endl;
    }

    return hitPoint;
}

void Pokemon::do_dmg(Pokemon* otherPokemon){
    if ((name=="Gengar" && otherPokemon->name=="Nidorino") || (name=="Nidorino" && otherPokemon->name=="Gengar")) {
        theFirstFight();
    }
    double dmg_dealt = attack - otherPokemon->defense;
    if (dmg_dealt <=0) {
        return;
    }
    otherPokemon->get_damaged(dmg_dealt);
}

void Pokemon::theFirstFight() {
    std::ifstream fichier("../.Review_Add/The_First_Fight.txt");
    if (!fichier.is_open()) {
        std::cerr << "Impossible d'ouvrir le fichier !" << std::endl;
    }

    std::string ligne;
    while (std::getline(fichier, ligne)) {
        std::cout << ligne << std::endl;
    }

    fichier.close();
}
