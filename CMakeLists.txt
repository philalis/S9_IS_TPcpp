cmake_minimum_required(VERSION 4.0)
project(IntroCpp)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(IntroCpp
        src/Pokemon.cpp
        src/Pokemon.hpp
        src/main.cpp
        src/main.hpp
        src/SetOfPokemon.cpp
        src/SetOfPokemon.h
        src/PokemonParty.cpp
        src/PokemonParty.h
        src/Pokeball.cpp
        src/Pokeball.h
        src/Pokedex.cpp
        src/Pokedex.h
)

