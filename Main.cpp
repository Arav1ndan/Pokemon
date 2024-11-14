#include <iostream>
using namespace std;

void waitForEnter()
{
    cout << "press enter to continue.." << endl;
    cin.get();
    
}
void clearConsole()
{
    #ifdef _WIN32
        system("cls");
        #else
        (void)system("clear");
        #endif
}
enum class PokemonChoice
{
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    PIKACHU // Default choice
};
enum class HealingItems
{
    Potion,
    Elixir
};
enum class BattleItems
{
    Potion,
    Elixir
};
enum class PokemonType
{
    FIRE,
    GRASS,
    WATER,
    ELECTRIC,
    NORMAL
};
class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;

    Pokemon()
    {
        name = "Pikachu";
        type = PokemonType::ELECTRIC;
        health = 10;
        cout << "A new Pokemon has been created with the default constructor!\n";
    }
    Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        cout << "A new Pokemon named " << name << " has been created!\n";
    }
    Pokemon(const Pokemon &other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon has been copied from " << other.name << "!\n";
    }
    ~Pokemon()
    {
        cout << name << "has been realeased.\n";
    }
    void attack()
    {
        cout << name << "attacks with a powerful move!\n";
    }
};
class Player
{
public:
    string p_name;
    Pokemon chosenPokemon;
    Player()
    {
        p_name = "Trainer";
        cout << "A new Player named " << p_name << "has been created!\n";
    }
    Player(string name, Pokemon p_chosenPokemon)
    {
        name = p_name;
        p_chosenPokemon = chosenPokemon;
    }
    Player(const Player &other)
    {
        p_name = other.p_name;
        chosenPokemon = other.chosenPokemon;
    }

    void choosePokemon(int choice)
    {
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::CHARMANDER:
            chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
            break;
        case PokemonChoice::BULBASAUR:
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
            break;
        case PokemonChoice::SQUIRTLE:
            chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
            break;
        default:
            chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
            break;
        }
        cout << "Player " << p_name << " chose " << chosenPokemon.name << "!\n";
        waitForEnter();
    }
};
class Professor_Oak
{
public:
    string p_name;
    void greetPlayer(Player &player)
    {
        cout << p_name << ": Hello there! Welcome to the world of Pokemon!\n";
        waitForEnter();
        cout << p_name << ": My name is Oak. People call me the Pokemon Professor!\n";
        waitForEnter();
        cout << p_name << ": But enough about me. Let's talk about you!\n";
        waitForEnter();
        //clearConsole();
    }
    void offerPokemonChoices(Player &player)
    {
        cout << p_name << ": First First, tell me, what's your name?\n";
        cin >> player.p_name;
        cout << p_name << ": Ah, " << player.p_name << "! What a fantastic name!\n";
        waitForEnter();
        cout << p_name << ": You must be eager to start your adventure. But first, you'll need a Pokemon of your own!\n";
        waitForEnter();
        cout << p_name << ": I have three Pokemon here with me. They're all quite feisty!\n";
        waitForEnter();
        cout << p_name << ": Choose wisely...\n";
        std::cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << p_name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;
        player.choosePokemon(choice);
        waitForEnter();
        clearConsole();
    }
    void explainMainQuest(Player &player)
    {
        clearConsole();
        cout << "Professor Oak:		Oak-ay " << player.p_name << "!, I am about to explain you about your upcoming grand adventure.\n";
        waitForEnter();
        cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";
        waitForEnter();
        cout << "Professor Oak: Your mission, should you choose to accept it—and trust me, you really don't have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League.\n";
        cout << "\n"
             << player.p_name << ": Wait... that sounds a lot like every other Pokémon game out there...\n";
        waitForEnter();
        cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.p_name << "! This is serious business!\n";
        waitForEnter();
        cout << "\nProfessor Oak: To achieve this, you'll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";
        waitForEnter();
        cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there's a limit to how many Pokémon you can carry, so choose wisely!\n";
        waitForEnter();
        cout << "\n"
             << player.p_name << ": Sounds like a walk in the park... right?\n";
        waitForEnter();
        cout << "Professor Oak: Hah! That's what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let's just say you'll be starting from square one.\n";
        waitForEnter();
        cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?\n";
        waitForEnter();
        cout << "\n"
             << player.p_name << ": Ready as I'll ever be, Professor!\n";
        waitForEnter();
        cout << "\nProfessor Oak: That's the spirit! Now, your journey begins...\n";
        waitForEnter();
        cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
        waitForEnter();
        clearConsole();
    }
};

int main()
{

    Player player;
    Professor_Oak professor;
    Pokemon placeholderPokemon;

    placeholderPokemon.name = "pikachu";
    placeholderPokemon.type = PokemonType::ELECTRIC;
    placeholderPokemon.health = 40;

    player.p_name = "Trainer";

    professor.p_name = "Professor Oak";

    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    professor.explainMainQuest(player);
    cout << "\n[Placeholder for the Game Loop]\n";
}
