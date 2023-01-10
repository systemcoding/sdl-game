/* This file contains the rendering loop and basic methods to create and run a window.
   Even though the file's name is Window.cpp i really wanted to seperate my game loop
   and my window stuff as i have done in my opengl project but i thought that would be 
   a mess. So hopefully this is ok!

   Written By: System Coding a.k.a Revanth
   Date: 10-01-2023 
*/


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
