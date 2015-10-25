//
// Created by root on 5/18/15.
//

#ifndef PILLAGE_LISTENER_H
#define PILLAGE_LISTENER_H

#include <Engine/Events/Event.h>

namespace Engine {
    class Listener {
    public:
        virtual ~Listener() {};
        virtual void onNotification(Listener &listener, Event &event) = 0;
    };
}

#endif //PILLAGE_LISTENER_H
