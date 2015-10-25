//
// Created by haggen on 5/15/15.
//

#ifndef PILLAGE_RENDERER_H
#define PILLAGE_RENDERER_H

#include "Engine/Entity/Window.h"

namespace Engine {
    class Renderer {
    public:
        Renderer(Engine::Window *window);
        ~Renderer();
        void init(Engine::Window *window);
        void draw(SDL_Surface &surface, SDL_Rect &src, SDL_Rect &dest);
    private:
        SDL_Renderer *renderer;
    };
}


#endif //PILLAGE_RENDERER_H
