//
// Created by haggen on 5/16/15.
//

#ifndef NAGLFAR_ENTITY_H
#define NAGLFAR_ENTITY_H

#include "GraphicsEntity.h"
#include "InputEntity.h"
#include "PhysicsEntity.h"

namespace Naglfar {
    class Entity {
    public:
        Entity(GraphicsEntity *graphics, InputEntity *input, PhysicsEntity *physics) :
                graphics(graphics), input(input), physics(physics)
        {}

        virtual void update(Renderer &renderer, SDL_Event &event) {
            input->update(*this, event);
            physics->update(*this);
            graphics->update(*this, renderer);
        }

    private:
        int direction;
        int velocity;
        int x, y;

        GraphicsEntity *graphics;
        InputEntity *input;
        PhysicsEntity *physics;
    };
}

#endif //NAGLFAR_ENTITY_H
