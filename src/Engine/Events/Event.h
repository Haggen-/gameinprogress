//
// Created by haggen on 5/4/15.
//

#ifndef PILLAGE_EVENT_H
#define PILLAGE_EVENT_H


class Event {
public:
    virtual int getEventCode() = 0;
    virtual void trigger() = 0;
protected:
    int eventCode;
};


#endif //PILLAGE_EVENT_H
