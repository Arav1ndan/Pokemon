#include <string>
#include "Pokemon.hpp"
using namespace std;
//class Pokemon;
class Player {
public:
    string name;
    Pokemon chosenPokemon;

    Player(); // Default constructor
    Player(string p_name, Pokemon p_chosenPokemon); // Parameterized constructor

    void choosePokemon(int choice); // Method to choose a Pokemon
    void battle(Pokemon &playerPokemon, Pokemon &wildPokemon)
  {
    cout << "A Wild " << wildPokemon.name << "appeared!\\n";

    while(!playerPokemon.isFainted() && !wildPokemon.isFainted())
    {
      playerPokemon.attack(wildPokemon);

      if(!wildPokemon.isFainted()){
        wildPokemon.attack(playerPokemon);
      }
    }
    if(playerPokemon.isFainted()){
        cout << playerPokemon.name <<" has fainted! You lost the battle.\\n";
    }else{
        cout << "You defeated the wild " << wildPokemon.name <<"\\n";
    }
  }
};