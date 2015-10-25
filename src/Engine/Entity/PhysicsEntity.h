//
// Created by haggen on 5/16/15.
//

#ifndef PILLAGE_PHYSICSENTITY_H
#define PILLAGE_PHYSICSENTITY_H
namespace Engine {

    class Entity;

    class PhysicsEntity {
    public:
        virtual ~PhysicsEntity() {};
        virtual void update(Entity &entity) = 0;
    };
}

#endif //PILLAGE_PHYSICSENTITY_H
