#pragma once
#include "../../include/Pokemon/Grass.hpp"
using namespace N_Main{
class Player;

class Game {
private:
  Grass forestGrass;
public:
  Game();
  void gameLoop(Player &player);
  void visitPokeCenter(Player &player); 
};
}