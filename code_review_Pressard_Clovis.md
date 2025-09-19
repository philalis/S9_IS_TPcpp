# Code Review
> Review fait par Clovis Pressard

## 1. Test du code
Lors du run du code, on peut observer qu'il y a des   
différence entre ce qui semble être demandé dans le main  
ce qui est écrit dans la console semble est différent.  

```aiignore
   PokemonParty party = PokemonParty();
    party.addPokemonToParty(pikachu);
    party.addPokemonToParty(bulbizarre);

    pikachu.do_dmg(&bulbizarre);
    bulbizarre.displayInfo();

    party.showParty();
    party.removePokemonFromParty(pokedex.find_by_name("Pikachu"));
    std::cout << "" << std::endl;
    party.showParty();
```
On devrait obtenir dans ton party dans un premier temps  
pickachue et bulbasaur, mais cela m'affichait deux fois  
bulbasaur et quand Pickachu est enlever de ton party,  
le seul pokemon restant est pickachu.

## 2. Analyse du code
La source du problème semble venir de ta classe ```PokemonParty.cpp``` dans
```addPokemonToParty``` et ```removePokemonFromParty```. Cela semble être due  
à des problèmes de pointeurs.

On peut observer dans ```SetOfPokemon.h``` que tu applique un pointeurs dans ton
vecteur ce qui peut être source de problème lorsque ce dernier est appelé dans 
```PokemonParty.c -> removePokemonFromParty```.
De plus dans ```SetOfPokemon.c -> display_pokemon``` étant donnés que tu as  
définis des pointeurs précédemment cela te bloque sur ces dernier.

## 3. Mon implémentation
J'ai ajouté dans la Classe Pokemon, pour que la fonction s'active  
il est nécessaire de choisir en combat (do_dmg) Gegnar et Nidorino pour que  
la fonction s'active.