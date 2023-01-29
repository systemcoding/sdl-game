#pragma once

#include <SDL2/SDL.h>

#include <memory>

#include "Game.h"
#include "Texture.h"

class Character
{
public:
    Character();

    void renderCharacter(SDL_Renderer* renderer);
    void moveCharacter();

    ~Character();
private:
    std::unique_ptr<Texture> m_Texture;
    SDL_Texture* m_CharacterTexture;
    SDL_Rect m_Rect, m_Dest;
    int m_X, m_Y;
};