//
// Created by haggen on 11/1/15.
//

#ifndef GAMEINPROGRESS_WINDOW_H
#define GAMEINPROGRESS_WINDOW_H

#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_render.h>

namespace Naglfar {
    class Window {
    public:
        Window(std::string windowName);
        void Draw();
        SDL_Renderer* GetRenderer();
        ~Window();
    private:
        SDL_Renderer *renderer;
        SDL_Window *window;
    };
}


#endif //GAMEINPROGRESS_WINDOW_H
