//
// Created by haggen on 5/16/15.
//

#ifndef PILLAGE_GRAPHICSENTITY_H
#define PILLAGE_GRAPHICSENTITY_H

#include "../graphics/Renderer.h"

namespace Naglfar {
    class Entity;
    class Renderer;

    class GraphicsEntity {
    public:
        GraphicsEntity();
        virtual ~GraphicsEntity() {};
        virtual void update(Entity &entity, Naglfar::Renderer &renderer) = 0;
        virtual void getDrawable();
    };
}

#endif //PILLAGE_GRAPHICSENTITY_H
