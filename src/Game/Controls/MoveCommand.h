//
// Created by haggen on 5/5/15.
//

#ifndef PILLAGE_MOVECOMMAND_H
#define PILLAGE_MOVECOMMAND_H

#include <SDL_log.h>
#include <Game/Player.h>

class MoveCommand {
public:
    void execute(Player &player, Movable::Direction direction);
};


#endif //PILLAGE_MOVECOMMAND_H
