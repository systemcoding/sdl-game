#include "Character.h"

Character::Character()
    :m_Texture(new Texture())
{
}

void Character::loadCharacter(std::string filepath, SDL_Renderer* renderer)
{
    m_CharacterTexture = m_Texture->loadTexture(filepath, renderer);

    m_SrcRect.x = 0;
    m_SrcRect.y = 0;
    m_SrcRect.w = 32;
    m_SrcRect.h = 32;

    m_DestRect.x = 0;
    m_DestRect.y = 0;
    m_DestRect.w = m_SrcRect.w * 2;
    m_DestRect.h = m_SrcRect.h * 2;

    SDL_RenderCopy(renderer, m_CharacterTexture, nullptr, &m_DestRect);
}

Character::~Character()
{

}