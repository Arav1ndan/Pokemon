#pragma once
#include <string>
#include "Pokemon.hpp"
using namespace std;
using namespace N_Player{
class Player {
public:
    string name;
    Pokemon chosenPokemon;

    Player(); // Default constructor
    Player(string p_name, Pokemon p_chosenPokemon); // Parameterized constructor

    void choosePokemon(int choice); // Method to choose a Pokemon
};
}