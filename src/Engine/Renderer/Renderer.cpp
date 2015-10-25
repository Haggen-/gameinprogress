//
// Created by haggen on 5/15/15.
//

#include "Renderer.h"

Engine::Renderer::Renderer(Engine::Window *window) {
    init(window);
    SDL_SetRenderDrawColor(renderer, 86, 124, 200, 0);
}

void Engine::Renderer::init(Engine::Window *window) {
    renderer = SDL_CreateRenderer(window->getWindow(), -1, SDL_RENDERER_ACCELERATED);
    if(renderer == nullptr) {
        SDL_LogError(0, "Unable to initialize renderer:", SDL_GetError());
        window->closeWindow();
        SDL_Quit();
    }
}

Engine::Renderer::~Renderer() {
    SDL_DestroyRenderer(renderer);
}

void Engine::Renderer::draw(SDL_Surface &surface, SDL_Rect &src, SDL_Rect &dest) {
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, SDL_CreateTextureFromSurface(renderer, &surface), &src, &dest);
    SDL_RenderPresent(renderer);
}
