#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class World
{
public:
    World();

    void setDefaultColor(SDL_Renderer* renderer);
    void renderPlatform(SDL_Renderer* renderer);

    ~World();
};