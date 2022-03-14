#include <iostream>

#define read(type, var) type var; cin >> var;

using namespace std;


#define printMenu \
    cout << "\nPlease Choose one of the following options: \n";\
    cout << "\n1) Warmer\n";\
    cout << "2) Cooler\n";\
    cout << "3) Output temperature\n";\
    cout << "4) To exit\n";

class Heater {
    private:
        int temperature;
    public:
        Heater() {
            temperature = 15;
        }
        void warmer() {
            temperature +=5;
        }
        void cooler() {
            temperature -= 5;
        }
        void printTemperature() {
            cout << "The current temperature is: " << temperature << endl;
        }
        ~Heater() {

        }   
};

int main() {

    printMenu
    read(int, option)
    Heater h1;
    while (option != 4) {
        switch (option)
        {
        case 1:
            h1.warmer();
            break;
        case 2:
            h1.cooler();
            break;
        case 3:
            h1.printTemperature();
            break;
        default:
            break;
        }
        system("pause");
        printMenu
        cin >> option;
    }
    return 0;
    
}