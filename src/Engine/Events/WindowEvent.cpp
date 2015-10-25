#include "WindowEvent.h"

WindowEvent::WindowEvent(int eventCode) {
    this->eventCode = 16;
}

int WindowEvent::getEventCode() {
    return this->eventCode;
}

void WindowEvent::trigger() {

}
