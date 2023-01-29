#include "Character.h"

Character::Character()
    :m_Texture(new Texture()), m_X(0), m_Y(0)
{

}

void Character::renderCharacter(SDL_Renderer* renderer)
{
    m_X = m_Dest.x;
    m_Y = m_Dest.y;

    m_CharacterTexture = m_Texture->loadTexture("../res/images/character.png", renderer);

    m_Rect.x = 0;
    m_Rect.y = 0;
    m_Rect.w = 32;
    m_Rect.h = 32;

    m_Dest.x = 180;
    m_Dest.y = 457;
    m_Dest.w = m_Rect.w * 2;
    m_Dest.h = m_Rect.h * 2;

    SDL_RenderCopy(renderer, m_CharacterTexture, nullptr, &m_Dest); 
}

void Character::moveCharacter()
{
    if(Game::m_Event.type == SDL_KEYDOWN)
    {
        switch(Game::m_Event.key.keysym.sym)
        {
        }
    }
}

Character::~Character()
{

}