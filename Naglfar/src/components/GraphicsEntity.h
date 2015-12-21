//
// Created by haggen on 5/16/15.
//

#ifndef NAGLFAR_GRAPHICSENTITY_H
#define NAGLFAR_GRAPHICSENTITY_H

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

#endif //NAGLFAR_GRAPHICSENTITY_H
