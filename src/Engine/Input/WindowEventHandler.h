#ifndef WINDOWEVENTHANDLER_H
#define WINDOWEVENTHANDLER_H

#include <bits/unique_ptr.h>
#include "SDL_events.h"
#include "../Entity/Window.h"

class WindowEventHandler {
public:
    WindowEventHandler(std::shared_ptr<Engine::Window> window);
    ~WindowEventHandler();

    void HandleEvent(SDL_WindowEvent event);
private:
    void CloseWindow();
    std::shared_ptr<Engine::Window> window;
};
#endif