//
// Created by haggen on 5/15/15.
//

#include "Renderer.h"

Naglfar::Renderer::Renderer(Naglfar::Window *window) {
    renderer = window->GetRenderer();
    numberOfDrawables = 0;
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 0);
    glewInit();
    if(GLEW_VERSION_3_0) {
        SDL_LogInfo(0, "Support for OpenGL 3.0 found!");
    }
}

Naglfar::Renderer::~Renderer() {
}

void Naglfar::Renderer::addDrawable(Naglfar::GraphicsEntity *drawable) {
    thingsToDraw[numberOfDrawables] = drawable;
    numberOfDrawables++;
}

void Naglfar::Renderer::drawAll() {
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    numberOfDrawables = 0;
}
