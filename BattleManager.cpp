#include "BattleManager.hpp"
#include <iostream>

void BattleManager::startBattle(Player &player, Pokemon &wildPokemon){
    std::cout << "A Wild "<< wildPokemon.name << "appeared!\n";
    battle(player.chosenPokemon,wildPokemon);
}