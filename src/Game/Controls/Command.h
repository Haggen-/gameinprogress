//
// Created by haggen on 5/4/15.
//

#ifndef PILLAGE_COMMAND_H
#define PILLAGE_COMMAND_H


class Command {
    public:
        virtual ~Command() {};
        virtual void execute() = 0;
};


#endif //PILLAGE_COMMAND_H
