#include "InputHandler.h"

InputHandler::InputHandler(std::shared_ptr<Engine::Window> processWindow) {
    SDL_LogDebug(SDL_LOG_PRIORITY_VERBOSE, "InputHandler created.");
    handler = new WindowEventHandler(processWindow);
}

void InputHandler::HandleEvents() {
    while(SDL_PollEvent(&currentEvent)) {
        if(currentEvent.type == SDL_WINDOWEVENT) {
            handler->HandleEvent(currentEvent.window);
        }
    }
}

InputHandler::~InputHandler() {
    SDL_LogDebug(SDL_LOG_PRIORITY_VERBOSE, "InputHandler destroyed.");
}