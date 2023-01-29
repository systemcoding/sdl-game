#include "World.h"

World::World()
{
}

void World::setDefaultColor(SDL_Renderer* renderer)
{
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, SDL_ALPHA_OPAQUE);
}

void World::renderPlatform(SDL_Renderer* renderer)
{
    SDL_Rect m_Rect;

    m_Rect.x = 130;
    m_Rect.y = 520;
    m_Rect.w = 1070;
    m_Rect.h = 250;

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);

    SDL_RenderFillRect(renderer, &m_Rect);
}

World::~World()
{

}