#include "Entity.h"

Entity::Entity(SDL_Texture* tex, float xCoord, float yCoord)
    :m_XCoord(xCoord), m_YCoord(yCoord), m_Texture(tex)
{
    m_CurrentFrame.x = 0;
    m_CurrentFrame.y = 0;
    m_CurrentFrame.w = 32;
    m_CurrentFrame.h = 32;
}

Entity::~Entity()
{

}