#include <string>
#include <vector>
#include "PokemonType.hpp"
#include "Pokemon.hpp"
using namespace std;
//class Pokemon;
enum class PokemonType;
struct Grass
{
    string enivormentType;
    vector<Pokemon> wildPokemonList;
    int encounterRate;
};
Grass forestGrass = {
    "Forest",
    {{"Pidgey", PokemonType::NORMAL, 40}, {"Caterpie", PokemonType::BUG, 35}}, 70};
Grass caveGrass = {
    "Cave",
    {{"Zubat", PokemonType::POISON, 30}, {"Geodude", PokemonType::ROCK, 50}},
    80};