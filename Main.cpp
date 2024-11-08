#include <iostream>
using namespace std;
int main()
{
    string player_Name;
    string chosen_pokemon;

    // Introduction by the Professor
    cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
    cout << "Professor Oak: My name is Oak. People call me the Pokemon "
            "Professor!\n";
    cout << "Professor Oak: But enough about me. Let's talk about you!\n";

      cout << "Professor Oak: First, tell me, what’s your name?\n";
  cin >> player_name;

  cout << "Professor Oak: Ah, " << player_name
            << "! What a fantastic name!\n";
  cout << "Professor Oak: You must be eager to start your adventure. But "
               "first, you’ll need a Pokemon of your own!\n";


    cout << "Ah, Trainer!" << endl;
    cout << "Welcome to the world of Pokémon!" << endl;
    cout << "Welcome to the world of Pokémon! I am Professor Oak.\n"
         << endl;
    cout << "Today is a momentous day—you’ll be choosing your very first Pokémon." << endl;
    cout << "Every great Trainer remembers this moment for the rest of their lives." << endl;
    cout << "So, choose wisely, young one!" << endl;
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;

    cout << "Well done, Trainer!" << endl;
    cout << "But… wait, you think your journey ends with just choosing a Pokémon?" << endl;
    cout << "No, no, no!" << endl;
    cout << "You need to confirm your choice and see how the game reacts!" << endl;

    switch (choice)
    {
    case 1:
        chosen_pokemon = "Bulbasaur";
        cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
        break;

    case 2:
        chosen_pokemon = "Charmander";
        cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
        break;

    case 3:
        chosen_pokemon = "Squirtle";
        cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";
        break;

    default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
        chosen_pokemon = "Pikachu"; // Default if no valid choice is made
        cout << "Professor Oak: Just kidding! Let's go with Pikachu, the surprise guest!\n";
        break;
    }

    cout << "Ah, an excellent choice!" << endl;
    cout << "But beware, Trainer," << endl;
    cout << "this is only the beginning." << endl;
    cout << "Your journey is about to unfold." << endl;
    cout << "Now let’s see if you’ve got what it takes to keep going!" << endl;
    cout << "Good luck, and remember… Choose wisely!" << endl;
    cout << "" << endl;
}