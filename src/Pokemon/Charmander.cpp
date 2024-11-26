#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        using namespace std;

        //SCharmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}
        chosenPokemon = new Charmander();

        void Charmander::flameThrower(Pokemon &target)
        {
            cout << name << " uses Flame Thrower on " << target.name << "!\n";
            target.takeDamage(20);
        }
        void Charmander::attack(Pokemon *target)
        {
            flameThrower(target);
        }
    }
}