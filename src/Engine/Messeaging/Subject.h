//
// Created by root on 5/18/15.
//

#ifndef PILLAGE_SUBJECT_H
#define PILLAGE_SUBJECT_H

#include "Listener.h"

#define MAX_LISTENERS 100

namespace Engine {
    class Subject {
    public:
        virtual ~Subject();
        void addListener(Listener &listener);
        void removeListener(Listener &listener);
    protected:
        virtual void notifyListener(Event event) = 0;
    private:
        Listener *listeners[MAX_LISTENERS];
        int numberOfListeners;
    };
}

#endif //PILLAGE_SUBJECT_H
