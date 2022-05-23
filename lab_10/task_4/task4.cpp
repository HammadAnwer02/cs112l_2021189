#include <iostream>
using namespace std;


void print(int* n)
{
    cout << "The value of the ptr cast: " << *n * 10 << endl;
}

int main()
{
    int num = 50;
    const int* num_ptr = &num;
    cout << "Num: " << *num_ptr << endl;
    print(const_cast<int*>(num_ptr));

}