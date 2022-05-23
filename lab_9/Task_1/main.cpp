#include <iostream>
#include "Vitz.h"

using namespace std;

int main() {
    Vehicle *v;
    Vitz v1(0, 0, 0, "", "", "");
    v = &v1;
    v->set();
    v->printValue();
}