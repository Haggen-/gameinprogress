//
// Created by haggen on 5/15/15.
//

#ifndef PILLAGE_RENDERER_H
#define PILLAGE_RENDERER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_log.h>
#include <SDL2/SDL_render.h>
#include "../window/Window.h"
#include "../components/GraphicsEntity.h"

namespace Naglfar {
    class Renderer {
    public:
        Renderer(Naglfar::Window *window);
        ~Renderer();
        void addDrawable(Naglfar::GraphicsEntity *drawable);
        void drawAll();
    private:
        SDL_Renderer *renderer;
        Naglfar::GraphicsEntity *thingsToDraw[6];
        int numberOfDrawables;
    };
}


#endif //PILLAGE_RENDERER_H
