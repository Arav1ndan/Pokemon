#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        // SCharmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}
        chosenPokemon = new Charmander();

        void Charmander::flameThrower(Pokemon &target)
        {
            cout << name << " used FLAME THROWER!\n";
            N_Utility::Utility::waitForEnter();

            cout << "...\n";
            N_Utility::Utility::waitForEnter();

            target->takeDamage(attackPower);

            if (target->isFainted())
                cout << target->name << " fainted!\n";
            else
                cout << target->name << " has " << target->health << " HP left.\n";
            N_Utility::Utility::waitForEnter();
        }
        void Charmander::attack(Move selectedMove, Pokemon* target){
    Pokemon::attack(selectedMove, target);

    if(selectedMove.name == "BLAZING CHARGE")
    {
        // Recoil effect: Charmander takes recoil damage
        this->takeDamage(10); // Fixed recoil damage
        std::cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
        N_Utility::Utility::waitForEnter();
    }
}
    }
}