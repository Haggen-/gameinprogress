#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <bits/unique_ptr.h>
#include "SDL2/SDL_log.h"
#include "SDL2/SDL_events.h"
#include "WindowEventHandler.h"
#include "../Entity/Window.h"

class InputHandler {
public:
    InputHandler(std::shared_ptr<Engine::Window> processWindow);

    void HandleEvents();

    ~InputHandler();

private:
    SDL_Event currentEvent;
    WindowEventHandler* handler;
};
#endif