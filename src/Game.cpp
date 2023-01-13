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

void Game::render(Entity& entity)
{
    SDL_Rect src;
    src.x = entity.getCurrentFrame().x;
    src.y = entity.getCurrentFrame().y;
    src.w = entity.getCurrentFrame().w;
    src.h = entity.getCurrentFrame().h;

    SDL_Rect dest;
    dest.x = entity.getXCoord();
    dest.y = entity.getYCoord();
    dest.w = entity.getCurrentFrame().w;
    dest.h = entity.getCurrentFrame().h;


    SDL_RenderCopy(m_GameWindow->getRendererInstance(), entity.getTexture(), &src, &dest);
}

void Game::display()
{
    SDL_RenderPresent(m_GameWindow->getRendererInstance());
}

SDL_Texture* Game::loadTexture(std::string filepath)
{
    SDL_Texture* texture = nullptr;

    texture = IMG_LoadTexture(m_GameWindow->getRendererInstance(), filepath.c_str());

    if(texture == nullptr)
        Log::Error("Failed to load texture", SDL_GetError(), "\n");

    return texture;
}

void Game::gameLoop()
{
    SDL_Texture* texture = loadTexture("../res/textures/grass.png");

    std::vector<Entity> entity = {
        Entity(texture, 100, 300),
        Entity(texture, 200, 400),
        Entity(texture, 200, 400),
        Entity(texture, 800, 400),
        Entity(texture, 20, 200),
        Entity(texture, 20, 400),
    }; 

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

        for(Entity& entities : entity)
        {
            render(entities);
        }

        display();
    }
}

Game::~Game()
{

}