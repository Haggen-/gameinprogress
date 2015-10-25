//
// Created by root on 5/6/15.
//

#ifndef PILLAGE_ACTOR_H
#define PILLAGE_ACTOR_H


class GameObject {
    public:
        virtual void draw() = 0;

    protected:
        int posX, posY;
};


#endif //PILLAGE_ACTOR_H
