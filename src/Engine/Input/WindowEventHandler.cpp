#include <SDL_log.h>
#include "WindowEventHandler.h"

WindowEventHandler::WindowEventHandler(std::shared_ptr<Engine::Window> processWindow) {
    window = processWindow;
    SDL_LogDebug(SDL_LOG_PRIORITY_VERBOSE, "Window event handler created.");
}

WindowEventHandler::~WindowEventHandler() {

}

void WindowEventHandler::HandleEvent(SDL_WindowEvent event) {
    switch(event.event) {
        case SDL_WINDOWEVENT_CLOSE:
            SDL_LogDebug(SDL_LOG_PRIORITY_VERBOSE, "Window closed.");
            CloseWindow();
            break;
        case SDL_WINDOWEVENT_SHOWN:
            SDL_LogDebug(SDL_LOG_PRIORITY_VERBOSE, "Window shown.");
            break;
    }
    if(event.type == SDL_WINDOWEVENT_CLOSE) {
    }
}

void WindowEventHandler::CloseWindow() {
    Engine::Window *tempWindow = window.get();
    tempWindow->closeWindow();
}