#include <iostream>
using namespace std;

enum class PokemonChoice {
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
        cout << "A new Player named " <<  p_name << "has been created!\n" ;
    }
    Player(string name, Pokemon p_chosenPokemon)
    {
        name = p_name;
        p_chosenPokemon = chosenPokemon;
    }
    Player(const Player& other)
    {
        p_name = other.p_name;
        chosenPokemon = other.chosenPokemon;
    }
    

       void choosePokemon(int choice) {
        switch ((PokemonChoice)choice) { 
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
    }
    void showChosenPokemon() {
        cout << "Player " << p_name << " has chosen " << chosenPokemon.name 
             << " with health " << chosenPokemon.health << ".\n";
    }
};
class Professor_Oak
{
public:
    string p_name;
    void greetPlayer(Player &player)
    {
        cout << p_name << ": Hello there! Welcome to the world of Pokemon!\n";
        cout << p_name << ": My name is Oak. People call me the Pokemon Professor!\n";
        cout << p_name << ": But enough about me. Let's talk about you!\n";
    }
    void offerPokemonChoices(Player &player)
    {
        cout << p_name << "First First, tell me, what's your name?\n";
        cin >> player.p_name;
        cout << p_name << ": Ah, " << player.p_name << "! What a fantastic name!\n";
        cout << p_name << ": You must be eager to start your adventure. But first, you'll need a Pokemon of your own!\n";

        cout << p_name << ": I have three Pokemon here with me. They're all quite feisty!\n";
        cout << p_name << ": Choose wisely...\n";
        std::cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << p_name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;
        player.choosePokemon(choice);
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

    cout << "Professor Oak " <<player.chosenPokemon.name << "and you " <<player.p_name <<", are going to be the best of friends!\n";
    
}

// string player_Name;
//     PokemonChoice pokemon_Choice = PokemonChoice::InvalidChoice;
//     HealingItems healingItems = HealingItems::Elixir;
//     BattleItems battleItem = BattleItems::Potion;
//     // Introduction by the Professor
//     cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
//     cout << "Professor Oak: My name is Oak. People call me the Pokemon "
//             "Professor!\n";
//     cout << "Professor Oak: But enough about me. Let's talk about you!\n";

//     cout << "Professor Oak: First, tell me, what's your name?\n";
//     cin >> player_Name;

//     cout << "Professor Oak: Ah, " << player_Name << "! What a fantastic name!\n";
//     cout << "Professor Oak: You must be eager to start your adventure. But "
//             "first, you'll need a Pokemon of your own!\n";

//     cout << "Professor Oak: I have three Pokemon here with me. They're all "
//             "quite feisty!\n";
//     cout << "Professor Oak: Choose wisely...\n";
//     cout << "You can choose one of the following Pokémon:\n";
//     cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
//     cout << "Which Pokemon would you like to choose? Enter the number: ";

//     int choice;
//     cin >> choice;

//     switch (choice)
//     {
//     case 1:

//         break;

//     case 2:
//         pokemon_Choice = PokemonChoice::Charmander;

//         break;

//     case 3:
//         pokemon_Choice = PokemonChoice::Squirtle;

//         break;

//     default:

//         pokemon_Choice = PokemonChoice::InvalidChoice;

//         break;
//     }

//     cout << "Professor Oak: " << (pokemon_Choice == PokemonChoice::Charmander ? "Charmander" : pokemon_Choice == PokemonChoice::Bulbasaur ? "Bulbasaur"
//                                                                                                                                           : "Squirtle")
//          << " and you, " << player_Name << ", are going to be the best of friends!\n";
//     cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n"
//          << endl;

//     cout << "Choose Your Healing Item\n";
//     cin >> choice;

//     switch (choice)
//     {
//     case 1:
//         healingItems = HealingItems::Potion;
//         cout << "Healing Potion used! Your Pokémon recovers HP!" << endl;
//         break;

//     default:
//         healingItems = HealingItems::Elixir;
//         cout << "Healing Potion used! Your Pokémon recovers HP!" << endl;
//         break;
//     }

//     cout << "Choose Your Battel item: \n";
//     cin >> choice;

//     switch (choice)
//     {
//     case 1:
//         battleItem = BattleItems::Elixir;
//         cout << "Battle Potion used! Your Pokémon's attack power rises!" << endl;
//         break;

//     default:
//         battleItem = BattleItems::Potion;
//         cout << "Battle Potion used! Your Pokémon's attack power rises!" << endl;
//         break;
//     }
