#include <iostream>
#include "MySelf.h"
#include "MySister.h"
#include <Windows.h>

using namespace std;

#define choosePerson \
cout << "\nPlease choose which of the following Persons: \n"\
 << "1) Myself\n"\
 << "2) MySister\n";

#define printMenu \
cout << "Please enter one of the options: "\
<< "Enter 1 to Set the Values" \
<< "Enter 2 to Print the infos \n" \
<< "Enter -1 to Exit\n"; \


#define read(type, var) type var; cin >> var;


int main()
{

   
    choosePerson
    read(int, option)
    switch (option)
        {
        case 1:
        {
            MySelf msy;
            printMenu
            read(int, choice)
            while(choice != -1)
            {

            switch(choice)
            {
                case 1:
                msy.set();
                break;
                case 2:
                msy.printInfo();
                break;
            }
            system("pause");
            system("CLS");
            printMenu
            cin >> choice;
            }
                    
            break;
        }
        case 2:
        {
            MySister msi;
            printMenu
            read(int, choice)
            while(choice != -1)
            {

            switch(choice)
            {
                case 1:
                msi.set();
                break;
                case 2:
                msi.printInfo();
                break;
            }
            system("pause");
            system("CLS");
            printMenu
            cin >> choice;
            }
        }

        default:
            break;
        }
    

    
    return 0;
}