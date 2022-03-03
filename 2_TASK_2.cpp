#include <iostream>
using namespace std;


#define read(type, var) type var; cin>>var;

#define mult(num, num2) int result = num << num2; cout << "The answer is: " << result; 

int main() {
    cout << "Enter first number:\n";
    read(int, n1);
    cout << "Enter the second number: \n";
    read(int, n2);
    mult(n1, n2);
}