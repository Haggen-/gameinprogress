//
// Created by haggen on 11/1/15.
//

#include <string>
#include "Window.h"

Naglfar::Window::Window(std::string windowName) {
    window = SDL_CreateWindow(windowName.c_str(), 0, 0, 640, 480, SDL_WINDOW_SHOWN | SDL_WINDOW_MOUSE_FOCUS);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if(renderer == nullptr) {
        SDL_LogError(0, "Unable to initialize renderer:", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
    }

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
}

Naglfar::Window::~Window() {
    if(renderer != nullptr) {
        SDL_DestroyRenderer(renderer);
    }
    if(window != nullptr) {
        SDL_DestroyWindow(window);
    }
}

SDL_Renderer* Naglfar::Window::GetRenderer() {
    return renderer;
}
