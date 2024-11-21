#pragma once
#include "../../include/Pokemon/Pikachu.hpp"
namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Pikachu:public Pokemon{
            public:
            Pikachu();
            void thunderShock(Pokemon &target);
        };
    }
} 
