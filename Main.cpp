#include <iostream>
using namespace std;

enum PokemonChoice{
    Bulbasaur,
    Charmander,
    Squirtle,
    InvalidChoice
};
int main()
{
    string player_Name;
    PokemonChoice pokemon_Choice = InvalidChoice;

    // Introduction by the Professor
    cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
    cout << "Professor Oak: My name is Oak. People call me the Pokemon "
            "Professor!\n";
    cout << "Professor Oak: But enough about me. Let's talk about you!\n";

    cout << "Professor Oak: First, tell me, what's your name?\n";
    cin >> player_Name;

    cout << "Professor Oak: Ah, " << player_Name << "! What a fantastic name!\n";
    cout << "Professor Oak: You must be eager to start your adventure. But "
            "first, you'll need a Pokemon of your own!\n";

    cout << "Professor Oak: I have three Pokemon here with me. They're all " "quite feisty!\n";
    cout << "Professor Oak: Choose wisely...\n";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokemon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        pokemon_Choice = Bulbasaur;
        
        break;

    case 2:
        pokemon_Choice = Charmander;
        
        break;

    case 3:
        pokemon_Choice = Squirtle;
       
        break;

    default:
        
        pokemon_Choice = InvalidChoice;
        
        break;
    }
    switch (pokemon_Choice)
    {
        case Bulbasaur:
        cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
        break;
        case Charmander:
        cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
        break;
        case Squirtle:
        cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";
        break;
        default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
        pokemon_Choice = Bulbasaur;
        cout << "Professor Oak: Just kidding! Let's go with Pikachu, the surprise guest!\n";
    }

    cout << "Professor Oak: " << (pokemon_Choice == Charmander ? "Charmander" : pokemon_Choice == Bulbasaur ? "Bulbasaur" : "Squirtle")
              << " and you, " << player_Name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

}