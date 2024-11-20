#include "Grass.hpp"

class Player;
struct Game
{
private:
    Grass forestGrass;

public:
    Game();
    void gameLoop(Player &player);
};
