#pragma once
#include <string>
#include <vector>
using namespace std;

namespace N_Pokemon {

    struct Move;
    enum class PokemonType;

    class Pokemon {
        int health; 
        int maxHealth; 
        int attackPower;
        vector<Move> moves; 

        Pokemon(); 
        Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);

        void heal();
        virtual void attack(Pokemon* target) = 0;
        void takeDamage(int damage);

    protected:
        void selectAndUseMove(Pokemon* target);
        
    };
}