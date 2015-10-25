//
// Created by haggen on 5/5/15.
//

#include "MoveCommand.h"

void MoveCommand::execute(Player& player, Movable::Direction direction) {
    SDL_LogInfo(0, "Hello, I'm moving in direction %d", direction);
    switch(direction) {
        case Movable::Direction::UP:
            player.move(0, 5);
            break;
        case Movable::Direction::DOWN:
            player.move(0, -5);
            break;
        case Movable::Direction::LEFT:
            player.move(5, 0);
            break;
        case Movable::Direction::RIGHT:
            player.move(-5, 0);
            break;
    }
}