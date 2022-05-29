#pragma once
#include <stdexcept>

#include "AND.h"
#include "OR.h"
#include "NOT.h"

class Connector {
private:
    LogicGate* fromGate;
    LogicGate* toGate;

public:

    Connector(LogicGate* fgate, LogicGate* tgate)
    {
        fromGate = fgate;
        toGate = tgate;
    }

    void connect()
    {
        if (toGate->getGate() == 'n') {
            connectToUnary();
        }
        else if (toGate->getGate() == 'a' || toGate->getGate() == 'o')
        {
            connectToBinary();
        }
    }

    void connectToUnary() {

        NOT* tgate = dynamic_cast<NOT*>(toGate);
        if (tgate->getInput() == -1) {
            if (fromGate->getGate() == 'a') {
                AND* fGate = dynamic_cast<AND*>(fromGate);
                tgate->setIn(fGate->getOval());
            }
            else if (fromGate->getGate() == 'o')
            {
                OR* fGate = dynamic_cast<OR*>(fromGate);
                tgate->setIn(fGate->getOval());
            }
            else if (fromGate->getGate() == 'n') {
                NOT* fGate = dynamic_cast<NOT*>(fromGate);
                tgate->setIn(fGate->getOval());
            }
            else
            {
                throw std::invalid_argument("gate is not here");
            }
        }
        else
        {
            throw std::invalid_argument("the gate does not have any free inputs");
        }
    }
    void connectToBinary() {
        if (toGate->getGate() == 'a') {
            AND* tGate = dynamic_cast<AND*>(toGate);
            if (tGate->getInputOne() == -1) {
                if (fromGate->getGate() == 'a') {
                    AND* fGate = dynamic_cast<AND*>(fromGate);
                   tGate->setIone(fGate->getOval());
                }
                else if (fromGate->getGate() == 'o')
                {
                    OR* fGate = dynamic_cast<OR*>(fromGate);
                   tGate->setIone(fGate->getOval());
                }
                else if (fromGate->getGate() == 'n') {
                    NOT* fGate = dynamic_cast<NOT*>(fromGate);
                   tGate->setIone(fGate->getOval());
                }
                else
                {
                    throw std::invalid_argument("gate is not here");
                }
            }
            else if (tGate->getInputTwo() == -1) {
                 if (fromGate->getGate() == 'a') {
                    AND* fGate = dynamic_cast<AND*>(fromGate);
                    tGate->setItwo(fGate->getOval());
                }
                else if (fromGate->getGate() == 'o')
                {
                    OR* fGate = dynamic_cast<OR*>(fromGate);
                    tGate->setItwo(fGate->getOval());
                }
                else if (fromGate->getGate() == 'n') {
                    NOT* fGate = dynamic_cast<NOT*>(fromGate);
                    tGate->setItwo(fGate->getOval());
                }
                else
                {
                    throw std::invalid_argument("gate is not here");
                }
            }
            else
            {
                throw std::invalid_argument("the gate does not have any free inputs");
            }
        }
        else if (toGate->getGate() == 'o') {
            OR* tGate = dynamic_cast<OR*>(toGate);
            if (tGate->getInputOne() == -1) {
                if (fromGate->getGate() == 'a') {
                    AND* fGate = dynamic_cast<AND*>(fromGate);
                    tGate->setIone(fGate->getOval());
                }
                else if (fromGate->getGate() == 'o')
                {
                    OR* fGate = dynamic_cast<OR*>(fromGate);
                    tGate->setIone(fGate->getOval());
                }
                else if (fromGate->getGate() == 'n') {
                    NOT* fGate = dynamic_cast<NOT*>(fromGate);
                    tGate->setIone(fGate->getOval());
                }
                else
                {
                    throw std::invalid_argument("gate is not here");
                }
            }
            else if (tGate->getInputTwo() == -1) {
                 if (fromGate->getGate() == 'a') {
                    AND* fGate = dynamic_cast<AND*>(fromGate);
                    tGate->setItwo(fGate->getOval());
                }
                else if (fromGate->getGate() == 'o')
                {
                    OR* fGate = dynamic_cast<OR*>(fromGate);
                    tGate->setItwo(fGate->getOval());
                }
                else if (fromGate->getGate() == 'n') {
                    NOT* fGate = dynamic_cast<NOT*>(fromGate);
                    tGate->setItwo(fGate->getOval());
                }
                else
                {
                    throw std::invalid_argument("gate is not here");
                }
            }
            else
            {
                throw std::invalid_argument("the gate does not have any free inputs");
            }
        }
    }
};
