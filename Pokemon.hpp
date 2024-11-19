#include <string>
enum class PokemonType;
using namespace std;

class Pokemon {
public:
    string name;
    PokemonType type;
    int health;
    int maxHealth;
    int attackPower;
    // Default constructor
    Pokemon();

    // Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);

    // Copy constructor
    Pokemon(const Pokemon &other);

    // Destructor
    ~Pokemon();

    void attack(Pokemon &target);
    void TakeDamage(int damage);
    bool isFainted()const;
    //void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
    void heal();
};