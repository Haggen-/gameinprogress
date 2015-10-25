//
// Created by root on 5/16/15.
//

#ifndef PILLAGE_DRAWMEPHYSICS_H
#define PILLAGE_DRAWMEPHYSICS_H

#include "PhysicsEntity.h"

namespace Engine {
    class DrawMePhysics : public PhysicsEntity {
    public:
        DrawMePhysics();
        virtual ~DrawMePhysics() {};
        void update(Entity &entity) override;
    };
}


#endif //PILLAGE_DRAWMEPHYSICS_H
