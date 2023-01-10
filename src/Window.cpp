#include "Window.h"

GameWindow::GameWindow(std::string title, uint32_t width, uint32_t height)
    :m_Title(title), m_Width(width), m_Height(height)
{
    if(SDL_Init(SDL_INIT_VIDEO) > 0)
    {
        Log::Error("SDL_INIT_VIDEO Failed", SDL_GetError());
    }

    // if(!(IMG_Init(IMG_INIT_PNG)))
    // {
    //     std::cout << "Image initialisation failed" << SDL_GetError() << std::endl;
    // }

    m_Window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED,
                                SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_MAXIMIZED);

    if(m_Window == nullptr)
    {
        Log::Error("SDL_CreateWindow() function failed! ", SDL_GetError(), "\n");
        SDL_Quit();
    }

    m_Renderer = SDL_CreateRenderer(m_Window, -1, SDL_RENDERER_ACCELERATED);
    if(m_Renderer == nullptr)
    {
        SDL_DestroyWindow(m_Window);
        Log::Error("SDL_CreateRenderer() function failed ", SDL_GetError(), "\n");
        SDL_Quit();
    }

    RenderLoop();
}

void GameWindow::RenderLoop()
{
    bool running = true;
    SDL_Event event;

    while(running)
    {
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
                running = false; 
        } 
    }
}

GameWindow::~GameWindow()
{
    SDL_DestroyWindow(m_Window);
}
