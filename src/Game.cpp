#include "Game.h"

// --------------------------------------Rendering test-------------------------------------
void Game::ChangeColors(int color)
{
    m_WindowSurface = SDL_GetWindowSurface(m_GameWindow->getWindowInstance());

    SDL_LockSurface(m_WindowSurface);
    SDL_memset(m_WindowSurface->pixels, color, m_WindowSurface->h * m_WindowSurface->pitch);
    SDL_UnlockSurface(m_WindowSurface);
    SDL_UpdateWindowSurface(m_GameWindow->getWindowInstance());
}
// -----------------------------------------------------------------------------------------

Game::Game(std::string title, uint32_t width, uint32_t height)
{
    m_GameWindow.reset(new GameWindow(title, width, height));

    init();
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
    m_TexturedRectangle.renderTexturedRectangle(m_GameWindow->getRendererInstance(), "./res/images/kong.bmp");
    m_TexturedRectangle.CreateRectangle(30, 50, 200, 250);
    m_TexturedRectangle.Render(m_GameWindow->getRendererInstance());

    m_TexturedRectangle.destroy();
}

void Game::init()
{
    m_WindowSurface = SDL_GetWindowSurface(m_GameWindow->getWindowInstance());

    bool running = true;
    SDL_Event event;

    while(running)
    {
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
                running = false;
        } 

        clearScreen();
        render();
        display();
    }
}

Game::~Game()
{
}