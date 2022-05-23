#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    float div;
    cout << "Enter first value: ";
    cin >> x;
    cout << "Enter second value: ";
    cin >> y;
    cout << "\n\nImplicit Type Casting: ";
    cout << endl << x/y << endl;
    cout << "\nExplicit Type Casting: ";
    cout << endl << "The value of float variable(res): " << (float)x/y << endl;
}