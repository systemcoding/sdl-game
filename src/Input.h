#pragma once

#include <SDL2/SDL.h>

#include <map>

class Input
{
public:
    Input();

    void resetKeys();

    void keyUp(SDL_Event event);
    void keyDown(SDL_Event event);

    bool isKeyPressed(SDL_Scancode keycode);
    bool isKeyHeld(SDL_Scancode scancode);
    bool isKeyReleased(SDL_Scancode scancode);
private:
    std::map<SDL_Scancode, bool> m_ReleasedKeys;
    std::map<SDL_Scancode, bool> m_HeldKeys;
    std::map<SDL_Scancode, bool> m_PressedKeys;
};