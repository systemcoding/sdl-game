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
    GameWindow::createWindow(title, width, height);
}

void Game::gameLoop()
{
    m_WindowSurface = SDL_GetWindowSurface(m_GameWindow->getWindowInstance());

    while(m_GameRunning)
    {
        m_FrameStart = SDL_GetTicks();

        clearScreen();
        displayScreen();
        handleEvents();

        m_FrameTime = SDL_GetTicks() - m_FrameStart;

        if(m_FrameDelay > m_FrameTime)
        {
            SDL_Delay(m_FrameDelay - m_FrameTime);
        }
    }

}

void Game::handleEvents()
{
    while(m_GameRunning)
    {
        m_Input->resetKeys();
        if(SDL_PollEvent(&m_Event))
        {
            if(m_Event.type == SDL_KEYDOWN)
            {
                if(m_Event.key.repeat == 0)
                {
                    m_Input->keyDown(m_Event);
                }
            }

            else if(m_Event.type == SDL_KEYUP)
            {
                m_Input->keyUp(m_Event);
            }

            else if(m_Event.type == SDL_QUIT)
            {
                m_GameRunning = false;
            }
        }

        if(m_Input->isKeyPressed(SDL_SCANCODE_ESCAPE) == true)
        {
            m_GameRunning = false;
        }

    }
}

void Game::clearScreen()
{
    SDL_RenderClear(m_GameWindow->getRendererInstance());
}

void Game::displayScreen()
{
    SDL_RenderPresent(m_GameWindow->getRendererInstance());
}

Game::~Game()
{
}