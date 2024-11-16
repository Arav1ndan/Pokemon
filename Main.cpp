#include <iostream>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"
#include "Player.hpp"
using namespace std;

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
// class Player
// {
// public:
//     string p_name;
//     Pokemon chosenPokemon;
//     Player()
//     {
//         p_name = "Trainer";
//         cout << "A new Player named " << p_name << "has been created!\n";
//     }
//     Player(string name, Pokemon p_chosenPokemon)
//     {
//         name = p_name;
//         p_chosenPokemon = chosenPokemon;
//     }
//     Player(const Player &other)
//     {
//         p_name = other.p_name;
//         chosenPokemon = other.chosenPokemon;
//     }

//     void choosePokemon(int choice)
//     {
//         switch ((PokemonChoice)choice)
//         {
//         case PokemonChoice::CHARMANDER:
//             chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
//             break;
//         case PokemonChoice::BULBASAUR:
//             chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
//             break;
//         case PokemonChoice::SQUIRTLE:
//             chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
//             break;
//         default:
//             chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
//             break;
//         }
//         cout << "Player " << p_name << " chose " << chosenPokemon.name << "!\n";
        
//     }
// };
class Professor_Oak
{
public:
    string p_name;
    void greetPlayer(Player &player)
    {
        cout << p_name << ": Hello there! Welcome to the world of Pokemon!\n";
        Utility::waitForEnter();
        cout << p_name << ": My name is Oak. People call me the Pokemon Professor!\n";
        Utility::waitForEnter();
        cout << p_name << ": But enough about me. Let's talk about you!\n";
        Utility::waitForEnter();
        // clearConsole();
    }
    void offerPokemonChoices(Player &player)
    {
        cout << p_name << ": First First, tell me, what's your name?\n";
        cin >> player.name;
        cout << p_name << ": Ah, " << player.name << "! What a fantastic name!\n";
        Utility::waitForEnter();
        cout << p_name << ": You must be eager to start your adventure. But first, you'll need a Pokemon of your own!\n";
        Utility::waitForEnter();
        cout << p_name << ": I have three Pokemon here with me. They're all quite feisty!\n";
        Utility::waitForEnter();
        cout << p_name << ": Choose wisely...\n";
        std::cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << p_name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;
        player.choosePokemon(choice);
        Utility::waitForEnter();
        Utility::clearConsole();
    }
    void explainMainQuest(Player &player)
    {
        Utility::clearConsole();
        cout << "Professor Oak:		Oak-ay " << player.name << "!, I am about to explain you about your upcoming grand adventure.\n";
        Utility::waitForEnter();
        cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Your mission, should you choose to accept it—and trust me, you really don't have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League.\n";
        cout << "\n"
             << player.name << ": Wait... that sounds a lot like every other Pokémon game out there...\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.name << "! This is serious business!\n";
        Utility::waitForEnter();
        cout << "\nProfessor Oak: To achieve this, you'll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there's a limit to how many Pokémon you can carry, so choose wisely!\n";
        Utility::waitForEnter();
        cout << "\n"
             << player.name << ": Sounds like a walk in the park... right?\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Hah! That's what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let's just say you'll be starting from square one.\n";
        Utility::waitForEnter();
        cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?\n";
        Utility::waitForEnter();
        cout << "\n"
             << player.name << ": Ready as I'll ever be, Professor!\n";
        Utility::waitForEnter();
        cout << "\nProfessor Oak: That's the spirit! Now, your journey begins...\n";
        Utility::waitForEnter();
        cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
        Utility::waitForEnter();
        Utility::clearConsole();
    }
};

void gameLoop(Player &player)
{
    bool keepPlaying = true;
    int choice;

    while (keepPlaying)
    {

        Utility::clearConsole();

        cout << "\nwhat would you like to do next " << player.name << "?\n"
             << endl;
        cout << "1. Battle Wild Pokemon " << endl;
        cout << "2. Vist PokeCenter" << endl;
        cout << "3. Challenge Gyms" << endl;
        cout << "4. Enter Pokemon League" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        Utility::clearInputBuffer();
        
        switch (choice)
        {
        case 1:
            cout << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?\\n";
            break;
        case 2:
            cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\\n";
            break;
        case 3:
            cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\\n";
            break;
        case 4:
            cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\\n";
            break;
        case 5:
            cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\\n";
            cout << "Are you sure you want to quit? (y/n): ";
            char quitChoice;
            cin >> quitChoice;
            if (quitChoice == 'Y' || quitChoice == 'y')
            {
                keepPlaying = false;
            }
            break;
        default:
            cout << "That's not a valid choice. Try again!\n";
            break;
        }

        Utility::waitForEnter();
    }
    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}
int main()
{

    Player player;
    Professor_Oak professor;
    Pokemon placeholderPokemon;

    placeholderPokemon.name = "pikachu";
    placeholderPokemon.type = PokemonType::ELECTRIC;
    placeholderPokemon.health = 40;

    player.name = "Trainer";

    professor.p_name = "Professor Oak";

    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    professor.explainMainQuest(player);
    cout << "\n[Placeholder for the Game Loop]\n";
}
