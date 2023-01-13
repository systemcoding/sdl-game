#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <string>

class Entity
{
private:
    SDL_Texture* m_Texture;
    float m_XCoord, m_YCoord;
    SDL_Rect m_CurrentFrame;
public:
    Entity(SDL_Texture* tex, float xCoord, float yCoord);

    SDL_Rect getCurrentFrame() { return m_CurrentFrame; }

    float getXCoord() { return m_XCoord; }
    float getYCoord() { return m_YCoord; }

    SDL_Texture* getTexture() { return m_Texture; }

    ~Entity();
};