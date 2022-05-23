#include <iostream>

using namespace std;

int main()
{
    double length, breadth;
    cout << "Enter the length of rectangle: ";
    cin>> length;
    cout << "Enter the Breadth of rectangle: ";
    cin >> breadth;
    cout << "Int\n" << "The area of the rectangle is: " << static_cast<int>(length* breadth) << endl;
    cout << "\nFloat\nThe area of the rectangle is: " << static_cast<float>(length*breadth) << endl;
}