//
// Created by root on 5/16/15.
//

#include "DrawMeGraphics.h"

void Engine::DrawMeGraphics::update(Engine::Entity &entity, Engine::Renderer &renderer) {

    drawCount++;
    srcRect.h = 60;
    srcRect.w = 30;
    srcRect.x = 0;
    srcRect.y = 0;
    destRect.h = 60;
    destRect.w = 30;
    destRect.x = 305;
    destRect.y = 200;

    renderer.draw(*spriteSurface, srcRect, destRect);
}

Engine::DrawMeGraphics::DrawMeGraphics(std::string spriteMapURI) : GraphicsEntity() {
    spriteSurface = IMG_Load(spriteMapURI.c_str());
    if(spriteSurface == nullptr) {
        SDL_LogWarn(0, "Failed to load Surface spritemap.png", SDL_GetError());
    };
}
