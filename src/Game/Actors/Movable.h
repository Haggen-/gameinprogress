//
// Created by haggen on 5/5/15.
//

#ifndef PILLAGE_MOVABLEACTOR_H
#define PILLAGE_MOVABLEACTOR_H

#include "GameObject.h"

class Movable {
public:
    enum Direction {LEFT = 0, RIGHT = 1, UP = 2, DOWN = 3};
    virtual void move(int x, int y) = 0;
protected:
    const double MAX_SPEED = 15;
    const double MIN_SPEED = 5;
    double acceleration;
    double velocity;
};


#endif //PILLAGE_MOVABLEACTOR_H
