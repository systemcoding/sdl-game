#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>

#include "utils/Log.h"

#include <string>

using namespace utils;

class TexturedRectangle
{
public:
    TexturedRectangle();

    void CreateRectangle(int x, int y, int w, int h);

    void renderTexturedRectangle(SDL_Renderer* renderer, std::string filepath);

    void Render(SDL_Renderer* renderer);
    void destroy();

    ~TexturedRectangle();
private:
    SDL_Texture* m_Texture;
    SDL_Surface* m_Surface;
    SDL_Rect m_Rect;
};