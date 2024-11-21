#include <vector>
using namespace N_Battle{
struct Grass;

class Pokemon;

class WildEncounterManager {
public:
    WildEncounterManager();
    Pokemon getRandomPokemonFromGrass(const Grass& grass);
};
}