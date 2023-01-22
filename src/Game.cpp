#include "Game.h"

// initialise static members
int Game::m_Fps = 60;
int Game::m_FrameDelay = 1000 / Game::m_Fps;
uint32_t Game::m_FrameStart;
int Game::m_FrameTime;

int count = 0;

Game::Game(std::string title, uint32_t width, uint32_t height)
    :m_GameRunning(true)
{
    m_GameWindow.reset(new GameWindow(title, width, height));
}

void Game::gameLoop()
{
    m_WindowSurface = SDL_GetWindowSurface(m_GameWindow->getWindowInstance());

    while(m_GameRunning)
    {
        count++;
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
    SDL_Event event;

    while(SDL_PollEvent(&event))
    {
        if(event.type == SDL_QUIT)
            m_GameRunning = false;
        
    }
}

void Game::clearScreen()
{
    SDL_SetRenderDrawColor(m_GameWindow->getRendererInstance(), 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(m_GameWindow->getRendererInstance());
}

void Game::display()
{
    SDL_RenderPresent(m_GameWindow->getRendererInstance());
}

void Game::render()
{
    m_Character = new Character();
    m_Character->loadCharacter("../res/images/character.png", m_GameWindow->getRendererInstance());
}

Game::~Game()
{
    delete m_Character;
}