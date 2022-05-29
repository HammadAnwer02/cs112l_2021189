#pragma once 
#include "BinaryGate.h"


class OR : public BinaryGate {
private:
public:
    OR() {}
    OR(std::string val) : BinaryGate(val) {setGate('o');}


    void setInputOne() {
        BinaryGate::setInputOne();
    }
    void setInputTwo() {
        BinaryGate::setInputTwo();
    }

    int compute() {
        if (getInputOne() == 1 || getInputTwo() == 1) {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
