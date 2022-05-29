#pragma once 
#include "BinaryGate.h"


class AND : public BinaryGate {
    private:
    public:
    AND() {};
    AND (std::string val) : BinaryGate(val) {setGate('a');}
    void setInputOne() {
        BinaryGate::setInputOne();
    }
    void setInputTwo() {
        BinaryGate::setInputTwo();
    }
    int compute() {
        if (BinaryGate::getInputOne() == 1 && BinaryGate::getInputTwo() == 1) {
            return 1;
        }
        else {
            return 0;
        }
    }
};