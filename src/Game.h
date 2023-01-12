#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>

#include <memory>

#include "Window.h"

class Game
{
private:
    std::unique_ptr<GameWindow> m_GameWindow;
public:
    Game(std::string title, uint32_t width, uint32_t height);

    SDL_Texture* loadTexture(std::string filepath);

    void gameLoop();
    void init();

    void clear();
    void render(SDL_Texture* characterTexture);
    void display();

    ~Game(); 
};