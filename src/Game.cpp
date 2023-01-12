#include "Game.h"

Game::Game(std::string title, uint32_t width, uint32_t height)
{
    m_GameWindow.reset(new GameWindow(title, width, height));
    gameLoop();

    init();
}

void Game::init()
{
}

void Game::clear()
{
    SDL_RenderClear(m_GameWindow->getRendererInstance());
}

void Game::render(SDL_Texture* characterTexture)
{
    SDL_RenderCopy(m_GameWindow->getRendererInstance(), characterTexture, nullptr, nullptr);
}

void Game::display()
{
    SDL_RenderPresent(m_GameWindow->getRendererInstance());
}

SDL_Texture* Game::loadTexture(std::string filepath)
{
    SDL_Texture* texture = NULL;

    texture = IMG_LoadTexture(m_GameWindow->getRendererInstance(), filepath.c_str());

    if(texture == nullptr)
        Log::Error("Failed to load texture", SDL_GetError(), "\n");

    return texture;
}

void Game::gameLoop()
{
    SDL_Texture* texture = loadTexture("res/textures/test.jpg");

    bool running = true;
    SDL_Event event;

    while(running)
    {
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
                running = false; 
        } 

        clear();
        render(texture);
        display();
    }
}

Game::~Game()
{

}