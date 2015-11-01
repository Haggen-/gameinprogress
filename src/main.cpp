#include <iostream>
#include <SDL.h>
#include "../Naglfar/src/window/Window.h"
#include "../Naglfar/src/graphics/Renderer.h"

using namespace std;

int main() {
    bool running = true;
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        cout << "Unknown errsor occurred." << SDL_GetError() << endl;
    }

    SDL_LogSetAllPriority(SDL_LOG_PRIORITY_VERBOSE);

    Naglfar::Window window("GAMENAME");
    Naglfar::Renderer renderer(&window);

    while(running) {
        renderer.drawAll();
    }

    return 0;
}