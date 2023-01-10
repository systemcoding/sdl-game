#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <string>

#include "utils/Log.h"

using namespace utils;

class GameWindow
{
private:
    SDL_Window* m_Window;
    SDL_Renderer* m_Renderer;
private:
    std::string m_Title;
    uint32_t m_Width;
    uint32_t m_Height;
public:
    GameWindow(std::string title, uint32_t width, uint32_t height);

    uint32_t CreateWindow(std::string title, uint32_t width, uint32_t height);
    void RenderLoop();

    ~GameWindow();
};