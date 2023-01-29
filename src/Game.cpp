#include "Game.h"

// initialise static members
int Game::m_Fps = 60;
int Game::m_FrameDelay = 1000 / Game::m_Fps;
uint32_t Game::m_FrameStart;
int Game::m_FrameTime;
SDL_Event Game::m_Event;

Game::Game(std::string title, uint32_t width, uint32_t height)
    :m_GameRunning(true)
{
    m_GameWindow.reset(new GameWindow(title, width, height));
    m_World.reset(new World());
    m_Character.reset(new Character());
}

void Game::gameLoop()
{
    m_WindowSurface = SDL_GetWindowSurface(m_GameWindow->getWindowInstance());

    while(m_GameRunning)
    {
        m_FrameStart = SDL_GetTicks();

        // functions that need to be ran
        handleEvents();
        clearScreen();
        render();
        display();

        m_FrameTime = SDL_GetTicks() - m_FrameStart;

        if(m_FrameDelay > m_FrameTime)
        {
            SDL_Delay(m_FrameDelay - m_FrameTime);
        }
    }
}

void Game::handleEvents()
{
    while(SDL_PollEvent(&m_Event))
    {
        if(m_Event.type == SDL_QUIT)
            m_GameRunning = false;
        m_Character->moveCharacter(); 
    }
}

void Game::clearScreen()
{
    SDL_SetRenderDrawColor(m_GameWindow->getRendererInstance(), 128, 128, 128, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(m_GameWindow->getRendererInstance());
}

void Game::render()
{
    m_World->renderPlatform(m_GameWindow->getRendererInstance());
    m_Character->renderCharacter(m_GameWindow->getRendererInstance());
}

void Game::display()
{
    SDL_RenderPresent(m_GameWindow->getRendererInstance());
}


Game::~Game()
{
}