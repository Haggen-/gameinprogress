#ifndef WINDOWEVENTS_H
#define WINDOWEVENTS_H

#include "Event.h"

class WindowEvent : public Event {
public:
    WindowEvent(int code);
    int getEventCode() override;
    void trigger() override;
};

#endif