#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>

#include <memory>

#include "Window.h"
#include "TexturedRectangle.h"

class Game
{
private:
    std::unique_ptr<GameWindow> m_GameWindow;
private:
    SDL_Surface* m_WindowSurface;
    SDL_Surface* m_TextureSurface;
    SDL_Renderer* m_Renderer;
    SDL_Texture* m_Texture;
private:
    TexturedRectangle m_TexturedRectangle;
public:
    Game(std::string title, uint32_t width, uint32_t height);

    void init();

    // Rendering test functions
    void ChangeColors(int color);
    ////////////////////////////

    void clearScreen();
    void render();
    void display();

    ~Game(); 
};