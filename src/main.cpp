#include <iostream>
#include <Game/Player.h>
#include <Game/Controls/MoveCommand.h>
#include <Engine/Renderer/Renderer.h>
#include <Engine/Entity/DrawMeGraphics.h>
#include <Engine/Entity/Entity.h>
#include <Engine/Entity/DrawMePhysics.h>
#include <Engine/Entity/DrawMeInput.h>
#include "Engine/Input/InputHandler.h"

using namespace std;

int main() {
    bool running = true;
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        cout << "Unknown errsor occurred." << SDL_GetError() << endl;
    }

    SDL_LogSetAllPriority(SDL_LOG_PRIORITY_VERBOSE);
    std::shared_ptr<Engine::Window> gameWindow(new Engine::Window(true));

    Engine::Renderer renderer(gameWindow.get());
    InputHandler handler(gameWindow);

    Player *myPlayer = new Player();

    MoveCommand command;
    command.execute(*myPlayer, Movable::Direction::DOWN);

    myPlayer->draw();
    Engine::DrawMeGraphics myGraphics("/home/haggen/ClionProjects/Pillage/res/spritemap.png");
    Engine::DrawMeInput myInput;
    Engine::DrawMePhysics myPhysics;
    Engine::Entity me(&myGraphics, &myInput, &myPhysics);
    int frames = 0;
    uint32_t startTime = SDL_GetTicks();
    while(running) {
        me.update(renderer);
        handler.HandleEvents();
        frames++;
        if(frames % 500 == 0) {
            uint32_t endTime = SDL_GetTicks();
            float fps = (float) frames / (endTime - startTime);
            SDL_LogWarn(0, "FPS Achived: %f, startTime: %d, entTime: %d", fps), startTime, endTime;
        }
    }

    return 0;
}