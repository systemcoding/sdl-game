#pragma once

#include <SDL2/SDL.h>

#include <memory>

#include "Window.h"
#include "Texture.h"
#include "Character.h"

class Game
{
private:
    std::unique_ptr<GameWindow> m_GameWindow;
    Character* m_Character;
private:
    SDL_Surface* m_WindowSurface;
private:
    static int m_Fps;
    static int m_FrameDelay;

    static uint32_t m_FrameStart;
    static int m_FrameTime;
    
    bool m_GameRunning;
public:
    Game(std::string title, uint32_t width, uint32_t height);

    void gameLoop();

    void handleEvents();

    void update();

    void clearScreen();
    void render();
    void display();

    ~Game(); 
};