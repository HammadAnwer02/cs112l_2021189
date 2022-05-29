#include "AND.h"
#include "OR.h"
#include "NOT.h"
#include "Connection.h"


using namespace std; 

int main() {
    LogicGate* l1 = new AND;
    AND* a1 = dynamic_cast<AND*>(l1);
    l1->setGate('a');
    a1->setInputOne();
    a1->setInputTwo();
    cout << a1->getOutput() << endl;

    LogicGate* l2 = new OR;
    OR* o1 = dynamic_cast<OR*>(l2);
    l2->setGate('o');
    o1->setInputOne();
    o1->setInputTwo();
    cout << o1->getOutput() << endl;


    // NOT n1("N1");
   
    LogicGate* l3 = new OR;
    l3->setGate('o');
    OR* o2 = dynamic_cast<OR*>(l3);

    Connector c1(l1, l3);
    Connector c2(l2, l3);
    
    try {
        c1.connect();
        c2.connect();
    
    }
    catch (exception& ex) {
        cerr << ex.what() << endl;
    }

    cout << o2->getOutput() << endl;
    
   
    
    
}