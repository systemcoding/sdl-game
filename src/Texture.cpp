#include "Texture.h"

Texture::Texture()
{

}

SDL_Texture* Texture::loadTexture(std::string filepath, SDL_Renderer* renderer)
{
    m_Surface = IMG_Load(filepath.c_str());
    m_Texture = SDL_CreateTextureFromSurface(renderer, m_Surface);
    SDL_FreeSurface(m_Surface);

    return m_Texture;
}

void Texture::setRect(int x, int y, int w, int h)
{
    m_Rect.x = x;
    m_Rect.y = y;
    m_Rect.w = w;
    m_Rect.h = h;
}

Texture::~Texture()
{

}