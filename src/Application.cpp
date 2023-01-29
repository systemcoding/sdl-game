#include "Game.h"

int main(int argc, char **argv)
{
    Game* game = new Game("Game", 1280, 720);
    game->gameLoop();

    delete game;

    return 0;
}