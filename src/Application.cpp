#include "Game.h"

int main(int argc, char **argv)
{
    Game* game = new Game("Game", 800, 600);
    game->gameLoop();

    delete game;

    return 0;
}