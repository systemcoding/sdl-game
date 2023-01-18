#include "TexturedRectangle.h"

TexturedRectangle::TexturedRectangle()
{
}

void TexturedRectangle::CreateRectangle(int x, int y, int w, int h)
{
    m_Rect.x = x;
    m_Rect.y = y;
    m_Rect.w = w;
    m_Rect.h = h;
}

void TexturedRectangle::renderTexturedRectangle(SDL_Renderer* renderer, std::string filepath)
{
    m_Surface = SDL_LoadBMP(filepath.c_str());
    m_Texture = SDL_CreateTextureFromSurface(renderer, m_Surface);
    SDL_FreeSurface(m_Surface);
}

void TexturedRectangle::Render(SDL_Renderer* renderer)
{
    SDL_RenderCopy(renderer, m_Texture, nullptr, &m_Rect);
}

void TexturedRectangle::destroy()
{
    SDL_DestroyTexture(m_Texture);
}

TexturedRectangle::~TexturedRectangle()
{
}