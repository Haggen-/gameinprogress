//
// Created by haggen on 11/1/15.
//

#include <string>
#include "Window.h"

Naglfar::Window::Window(std::string windowName) {
    SDL_CreateWindowAndRenderer(800, 600, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC
                                          | SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL | SDL_WINDOW_MOUSE_FOCUS,
                                &window, &renderer);

    SDL_SetWindowTitle(window, windowName.c_str());

    if(renderer == nullptr) {
        SDL_LogError(0, "Unable to initialize renderer:", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
    }

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

SDL_Window *Naglfar::Window::GetWindow() {
    return window;
}
