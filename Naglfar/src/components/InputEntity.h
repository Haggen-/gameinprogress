//
// Created by haggen on 5/16/15.
//

#ifndef NAGLFAR_INPUTENTITY_H
#define NAGLFAR_INPUTENTITY_H

#include <SDL2/SDL_events.h>

namespace Naglfar {

    class Entity;

    class InputEntity {
    public:
        virtual ~InputEntity() {};
        virtual void update(Entity &entity, SDL_Event &event) = 0;
    };
}



#endif //NAGLFAR_INPUTENTITY_H
