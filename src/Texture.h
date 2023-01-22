#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <string>

class Texture
{
public:
    Texture();

    SDL_Texture* loadTexture(std::string filepath, SDL_Renderer* renderer);

    void setRect(int x, int y, int w, int h);

    SDL_Rect getRect() { return m_Rect; }

    ~Texture();
private:
    SDL_Surface* m_Surface;
    SDL_Texture* m_Texture;
    SDL_Rect m_Rect;
};