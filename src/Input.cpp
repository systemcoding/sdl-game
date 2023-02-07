#include "Input.h"

/*
A little description for what i am doing in this class (also for me to remember lol):
So basically i have these functions:
    * resetKeys, keyDown, keyUp, isKeyPressed, isKeyHeld, isKeyReleased
    * the resetKeys to reset all the pressed and held keys.
    * the keyDown is to set the pressedKeys and heldKeys to be true
    * the keyUp is to set all the releasedKeys to be true and heldKeys to be false
    * isKeyPressed function is to return whether key is pressed or not
    * isKeyHeld function is to return whether key is held or not
    * isKeyReleased function is to return whether key is released or not

We use maps for this class for simplicity and easy access of keys (avoid vectors for this class!)
*/

Input::Input()
{}

void Input::resetKeys()
{
    m_PressedKeys.clear();
    m_ReleasedKeys.clear();
}

void Input::keyDown(SDL_Event event)
{
    m_PressedKeys[event.key.keysym.scancode] = true;
    m_HeldKeys[event.key.keysym.scancode] = true;
}

void Input::keyUp(SDL_Event event)
{
    m_ReleasedKeys[event.key.keysym.scancode] = true;
    m_HeldKeys[event.key.keysym.scancode] = false;
}

bool Input::isKeyPressed(SDL_Scancode keycode)
{
    return m_PressedKeys[keycode];
}

bool Input::isKeyHeld(SDL_Scancode scancode)
{
    return m_HeldKeys[scancode];
}

bool Input::isKeyReleased(SDL_Scancode scancode)
{
    return m_ReleasedKeys[scancode];
}