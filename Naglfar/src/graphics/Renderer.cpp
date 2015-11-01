//
// Created by haggen on 5/15/15.
//

#include "Renderer.h"

Naglfar::Renderer::Renderer(Naglfar::Window *window) {
    renderer = window->GetRenderer();
    numberOfDrawables = 0;
}

Naglfar::Renderer::~Renderer() {
}

void Naglfar::Renderer::addDrawable(Naglfar::GraphicsEntity *drawable) {
    thingsToDraw[numberOfDrawables] = drawable;
    numberOfDrawables++;
}

void Naglfar::Renderer::drawAll() {
    SDL_RenderClear(renderer);
    for(int i = 0; i < numberOfDrawables; i++) {

    }
    SDL_RenderPresent(renderer);
    numberOfDrawables = 0;
}
