//
// Created by root on 12/21/15.
//

#ifndef GAMEINPROGRESS_SCENE_H
#define GAMEINPROGRESS_SCENE_H

/**
 * Current scene to render, should contain list of all game objects in the scene that can be passed to the renderer.
 * The player viewport should be attached to a scene.
 */

#include "Entity.h"

namespace Naglfar {
    class Scene {
    public:
        virtual void insert(Entity& entity) = 0;
        virtual void update() = 0; // Determine visible objects, and pass them to the renderer.
    };
}

#endif //GAMEINPROGRESS_SCENE_H
