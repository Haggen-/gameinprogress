//
// Created by haggen on 5/16/15.
//

#ifndef PILLAGE_INPUTENTITY_H
#define PILLAGE_INPUTENTITY_H

namespace Engine {

    class Entity;

    class InputEntity {
    public:
        virtual ~InputEntity() {};
        virtual void update(Entity &entity) = 0;
    };
}



#endif //PILLAGE_INPUTENTITY_H
