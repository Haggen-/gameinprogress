//
// Created by root on 5/6/15.
//

#ifndef PILLAGE_PLAYER_H
#define PILLAGE_PLAYER_H

#include <Game/Actors/GameObject.h>
#include <Game/Actors/Movable.h>

class Player : public Movable, GameObject {
public:
    Player();
    ~Player() { };
    void move(int x, int y);
    void draw();
};

#endif //PILLAGE_PLAYER_H
