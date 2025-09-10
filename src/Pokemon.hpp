#ifndef INTROCPP_POKEMON_H
#define INTROCPP_POKEMON_H

#include <iostream>
#include <string>
using std::string;

class Pokemon {
    private:
        int id;
        int evolution;
        string name;
        double hitPoint;
        double maxHitPoint;
        double attack;
        double defense;

    protected:
    static int pokemon_count;

    public:
    Pokemon(int id,
        const string& name,
        double maxHitPoint,
        double attack,
        double defense);

    Pokemon(const Pokemon &otherPokemon);

    ~Pokemon();

    void displayInfo() const;

    int get_id() const;
    string get_name();
    double get_hitPoint() const;
    double get_attack() const;
    double get_defense() const;
    int get_evolution() const;

    void do_dmg(Pokemon* otherPokemon);
    double get_damaged(double dmg);
};

#endif //INTROCPP_POKEMON_H