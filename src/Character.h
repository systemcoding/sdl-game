#pragma once

#include <SDL2/SDL.h>

#include <memory>

#include "Texture.h"
#include "utils/Log.h"

using namespace utils;

class Character
{
public:
    Character();

    void loadCharacter(std::string filepath, SDL_Renderer* renderer);

    ~Character();
private:
    std::unique_ptr<Texture> m_Texture;
    float m_XPos, m_YPos;
private:
    SDL_Rect m_SrcRect, m_DestRect;
    SDL_Texture* m_CharacterTexture;
};