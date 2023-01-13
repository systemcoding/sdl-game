#pragma once

#include <SDL2/SDL.h>

#include <memory>
#include <vector>

#include "Window.h"
#include "Entity.h"

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
    void render(Entity& entity);
    void display();

    ~Game(); 
};