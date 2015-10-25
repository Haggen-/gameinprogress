//
// Created by haggen on 5/16/15.
//

#ifndef PILLAGE_GRAPHICSENTITY_H
#define PILLAGE_GRAPHICSENTITY_H

#include <Engine/Renderer/Renderer.h>

namespace Engine {

    class Entity;

    class GraphicsEntity {
    public:
        virtual ~GraphicsEntity() {};
        virtual void update(Entity &entity, Renderer &renderer) = 0;
    };
}

#endif //PILLAGE_GRAPHICSENTITY_H
