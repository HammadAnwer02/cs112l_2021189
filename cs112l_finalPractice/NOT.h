#pragma once 
#include "UnaryGate.h"


class NOT : public UnaryGate {
    private:
    public:
    NOT () {}

    NOT (std::string val) : UnaryGate(val) {setGate('n');}
    void setInput() {
        UnaryGate::setInput();
    }

    void setIn (int val) {
        UnaryGate::setIn(val);
    }
    int compute() {
        if (getInput() == 1) {
            return 0;
        }
        else 
        {
            return 1;
        }
    }
};