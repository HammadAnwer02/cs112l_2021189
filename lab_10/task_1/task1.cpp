#include <iostream>


using namespace std;


int main()
{
    float x;
    int y;
    int temp;
    char a, b, c;
    cout << "Enter Value for first variable: ";
    cin >> x;
    y = x;
    cout << "Enter Value for third variable: ";
    cin >> temp;
    a = temp;
    cout << "Enter Value for fourth variable: ";
    cin >> b;
    cout << "Enter Value for fifth variable: ";
    cin >> c;
    cout << endl << "First Variable: " << x << endl;
    cout << endl << "Second Variable: " << y << endl;
    cout << endl << "Type casting char to int data type(Third + Fourth) = " << a + b << endl;
    cout << endl << "Type casting from int data to float type(Third + fifth):  " << a + c + 0.0f << endl;
}