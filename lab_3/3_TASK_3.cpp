#include <iostream>
#include <limits>


#define read(type, var) type var; validInput(var);


#define createAndinputArr(type, arr, size) \
    type * arr = new type [size];          \
    cout << "Enter elements to the array: "; \
    for (int i = 0; i< size; i++) \
        validInput( arr [i] );
        
#define printArr(start, arr, size)\
     for (int i = start; i< size; i++) \
        cout << arr[i] << " "; cout << endl;

using namespace std;

void validInput(int &n)
{
    while (1)
    {
        if (cin >> n)
            return;
        else
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid Input! Please enter an integer value: ";
        }
    }
}

int main() {
    cout << "Enter the size of the array: ";
    read(int, size)
    createAndinputArr(int, num, size)

    int *temp = new int[size];
    int j = 0;
    
    for (int i = 0 ; i< size; i++) 
        if(num[i] >= 0) {
            temp[j] = num[i];
            j++;
    
    for (int i = 0; i< size; i++) 
        if (num[i] < 0) {
            temp[j] = num[i];
            j++;
        }
    
    delete [] num;
    num = temp;
    cout << "The elements now are: ";
    printArr(0, num, size)
    delete [] num;
    return 0;
}