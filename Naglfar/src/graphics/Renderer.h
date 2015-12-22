//
// Created by haggen on 5/15/15.
//

#ifndef NAGLFAR_RENDERER_H
#define NAGLFAR_RENDERER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_log.h>
#include <SDL2/SDL_render.h>
#include <GL/glew.h>
#include <GL/gl.h>
#include "../window/Window.h"
#include "../components/GraphicsEntity.h"
#include "../components/Scene.h"

namespace Naglfar {
    class Renderer {
    public:
        Renderer(Naglfar::Window *window);
        ~Renderer();

        void addScene(Naglfar::Scene &scene);
        void addDrawable(Naglfar::GraphicsEntity *drawable);
        void drawAll();
    private:
        SDL_Renderer *renderer;
        SDL_GLContext glContext;
    };
}


#endif //NAGLFAR_RENDERER_H
