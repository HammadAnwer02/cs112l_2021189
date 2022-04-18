#include <iostream>

#include "checkingAccount.h"
#include "savingsAccount.h"


using namespace std;

#define read(type, var) type var; cin >> var;

#define printMenu \
cout << "Please enter one of the options: "\
<< "Enter 1 to " \
<< "Enter 2 to " \
<< "Enter 3 to " \


int main()
{
    savingsAccount s1(189, 10000, 0.02, 1000);
    checkingAccount c1(189, 10000, 0.02, 2000, 100);

    cout << s1.getBalance() << endl;
    
    
}