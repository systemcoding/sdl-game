#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#include "utils/Log.h"

using namespace utils;

int main(int argc, char *argv[])
{
    if(SDL_Init(SDL_INIT_VIDEO) > 0)
    {
        Log::Error("SDL_INIT_VIDEO Failed", SDL_GetError());
    }

    // if(!(IMG_Init(IMG_INIT_PNG)))
    // {
    //     std::cout << "Image initialisation failed" << SDL_GetError() << std::endl;
    // }

    return 0;
}