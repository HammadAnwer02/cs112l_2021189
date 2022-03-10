#include <iostream>


using namespace std;

class Swap {
    private:

    int a;
    int b;
    public:
    void setter() {
        cout << "Enter two values: ";
        cin >> a >> b;
    }
    
    void swap() {
        a+=b;
        b = a- b;
        a = a-b;
    }

    void display() {
        cout << endl<< "The value of a is: " << a;
        cout << endl << "The value of b is: " << b;
    }
};


int main() {
    Swap num;
    num.setter();
    cout << "Before swapping: " << endl;
    num.display();
    num.swap();
    cout << "\n\nAfter swapping: " << endl;
    num.display();
}
