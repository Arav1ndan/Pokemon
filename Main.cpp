#include "include/Main/Game.hpp"
#include "include/Character/Player/Player.hpp"
#include "include/Character/ProfessorOak.hpp"
#include <iostream>
#include <limits> 

using namespace N_Character;
using namespace N_Player;

int main() {

  
    ProfessorOak* professor = new ProfessorOak("Professor Oak");
    N_Player::Player* player = new N_Player::Player();

   
    professor->greetPlayer(player);
    professor->offerPokemonChoices(player);

    
    professor->explainMainQuest(player);

   
    N_Main::Game* game = new N_Main::Game();
    game->gameLoop(player);

    delete(professor);
    delete(player);
    delete(game);
    
    return 0;
}