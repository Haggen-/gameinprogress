//
// Created by haggen on 5/16/15.
//

#ifndef NAGLFAR_PHYSICSENTITY_H
#define NAGLFAR_PHYSICSENTITY_H

namespace Naglfar {

    class Entity;

    class PhysicsEntity {
    public:
        virtual ~PhysicsEntity() {};
        virtual void update(Entity &entity) = 0;
    };
}

#endif //NAGLFAR_PHYSICSENTITY_H
