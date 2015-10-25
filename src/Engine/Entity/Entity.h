//
// Created by haggen on 5/16/15.
//

#ifndef PILLAGE_ENTITY_H
#define PILLAGE_ENTITY_H



#include <Engine/Renderer/Renderer.h>

#include "GraphicsEntity.h"
#include "InputEntity.h"
#include "PhysicsEntity.h"

namespace Engine {
    class Entity {
    public:
        Entity(GraphicsEntity *graphics, InputEntity *input, PhysicsEntity *physics) :
                graphics(graphics), input(input), physics(physics)
        {}

        virtual void update(Renderer &renderer) {
            input->update(*this);
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

#endif //PILLAGE_ENTITY_H
