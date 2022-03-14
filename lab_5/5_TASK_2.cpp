#include <iostream>

#define read(type, var) type var; cin >> var;

using namespace std;

class Parity {
    private:
        int size;
        int *parr;
    public:
        Parity() {
            size = 0;
            parr = new int[size];
            *parr = 0;
        }
        void put(int num) {
            size++;
            int *temp = new int[size];
            int i = 0;
            for (; i < size - 1; i++) {
                temp[i] = parr[i];
            }
            delete [] parr;
            temp[i] = num;
            parr = temp;
            
        }   
        void print () {
            cout << "The elements are: \n";
            for (int i = 0; i < size; i++) {
                cout << parr[i] << " ";
            }
            cout << endl;
        }
        void Delete(int num) {
            size--;
            int *temp = new int[size];
            for (int i = 0;  i < size; i++) {
                temp[i] = parr[i];    
            }
            delete [] parr;
            parr = temp;
        }
        int test() {
            if (size % 2 == 0) {
                return 1;
            }
            else {
                return 0;
            }
        }
        ~Parity() {
            delete [] parr;
        }

};

#define printMenu \
    cout << "\nPlease Choose one of the following options: \n";\
    cout << "\n1) Put\n";\
    cout << "2) Print\n";\
    cout << "3) Delete\n";\
    cout << "4) Test\n";\
    cout << "5) exit\n";

int main() {

    printMenu
    read(int, option)
    Parity p1;
    while (option != 5) {
        switch (option)
        {
        case 1:
            cout << "Enter a number: ";
            read(int, num)
            p1.put(num);
            break;
        case 2:
            p1.print();
            break;
        case 3:
            cout << "Enter a number: ";
            p1.Delete(num);
            break;
        case 4:
            cout << p1.test() << endl;
        default:
            break;
        }
        system("pause");
        printMenu
        cin >> option;
    }
    return 0;
    
}