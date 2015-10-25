#ifndef WINDOW_H
#define WINDOW_H

#include <memory>
#include "SDL2/SDL.h"

namespace Engine {


    struct SDLWindowDestroyer
    {
        void operator()(SDL_Window* w) const
        {
            SDL_DestroyWindow(w);
        }
    };

    class Window {
    public:
        Window(bool);
        void useWindow();
        void closeWindow();
        SDL_Window* getWindow();
    private:
        SDL_Window* window;
    };
}

#endif