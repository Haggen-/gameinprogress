#include <iostream>
#include "Window.h"

Engine::Window::Window(bool openGLWindow) {
    if(openGLWindow) {
        window = SDL_CreateWindow("Title", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);
    }
    else {
        window = SDL_CreateWindow("Title", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_RESIZABLE);
    }
}

void Engine::Window::useWindow() {
    SDL_LogDebug(SDL_LOG_PRIORITY_VERBOSE, "Use Window Called.");
}

SDL_Window* Engine::Window::getWindow() {
    return window;
}

void Engine::Window::closeWindow() {
    SDL_DestroyWindow(window);
}