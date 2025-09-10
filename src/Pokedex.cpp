//
// Created by phila on 09/09/2025.
//

#include "Pokedex.h"

#include <fstream>
#include <sstream>

Pokedex* Pokedex::pPokedex = nullptr;




Pokedex Pokedex::getPokedex() {
    if (pPokedex == nullptr) {
        Pokedex pokedex = Pokedex();
        pPokedex = &pokedex;
        return pokedex;
    }
    return *pPokedex;
}

Pokedex::Pokedex() {

    std::ifstream fichier(nomFichier); // Ouvre le fichier
    if (!fichier.is_open()) { // Vérifie si le fichier est bien ouvert
        std::cerr << "Impossible d'ouvrir le fichier : " << nomFichier << std::endl;
        return ;
    }
    std::string ligne;
    while (std::getline(fichier, ligne)) { // Lit le fichier ligne par ligne
        if (ligne.at(0) == '#'){        // The first line, not a Pokemon
            continue;
        }

        std::stringstream ss(ligne); // Utilise un flux pour diviser la ligne
        std::string cellule;
        std::vector<std::string> donneesLigne;
        // Divise la ligne en cellules séparées par des virgules
        while (std::getline(ss, cellule, ',')) {
            donneesLigne.push_back(cellule); // Ajoute chaque cellule au vecteur
        }
        // Affiche les données de la ligne
        // for (const auto& valeur : donneesLigne) {
        //     std::cout << valeur << " "; // Affiche les valeurs séparées par un espace
        // }
        int id = std::stoi(donneesLigne.at(0));
        std::string name = donneesLigne.at(1);
        double HP = atof(donneesLigne.at(5).c_str());
        double attack = atof(donneesLigne.at(6).c_str());
        double defense = atof(donneesLigne.at(7).c_str());
        //double generation = atof(donneesLigne.at(11).c_str());
        Pokemon* pPok = new Pokemon(id,name,HP, attack , defense);
        pokemon_vect.push_back(pPok);
        //std::cout << std::endl;
    }
    fichier.close(); // Ferme le fichier
    pPokedex = this;
}

Pokemon Pokedex::find_by_id(int id) {
    for (auto i : pokemon_vect) {
        if (i->get_id() == id) {
            return *i;
        }
    }
    std::cout <<"Couldn't find a pokemon with id "<<id<< std::endl;

    // something should be returned even if the id isn't found. but what ??
}
Pokemon Pokedex::find_by_name(std::string name) {
    for (auto i : pokemon_vect) {
        if (i->get_name() == name) {
            return *i;
        }
    }
    std::cout <<"Couldn't find a pokemon with name "<<name<< std::endl;

    // something should be returned even if the name isn't found. but what ??
}