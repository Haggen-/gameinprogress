//
// Created by root on 5/16/15.
//

#ifndef PILLAGE_DRAWMEINPUT_H
#define PILLAGE_DRAWMEINPUT_H

#include "InputEntity.h"

namespace Engine {
    class DrawMeInput : public InputEntity {
    public:
        DrawMeInput();
        virtual ~DrawMeInput() {};
        void update(Entity &entity) override;
    };
}


#endif //PILLAGE_DRAWMEINPUT_H
