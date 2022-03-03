#include <iostream>
#include <limits>

using namespace std;

#define read(type, var) type var; validInput(var);

#define createAndinputArr(type, arr, size) \
    type * arr = new type [size];          \
    cout << "Enter elements to the array: "; \
    for (int i = 0; i< size; i++) \
        validInput( arr [i] );


#define getHighestAndLowest(arr, highest, lowest, size) \
    for (int i = 0; i < size; i++) {\
            if (num[i] > highest)\
                highest = num[i];\
            if (num[i] < lowest)\
                lowest = num[i];\
    }

#define initHighestAndLowest(highest, lowest, num) \
    int highest = * num, lowest = * num;
   
void validInput(int& n)
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

void getNhighestandNlowest(int* num, int size, int n, int counter = 0) {

    if (counter < n - 1) {
        initHighestAndLowest(highest, lowest, num)
        getHighestAndLowest(num, highest, lowest, size)
        int* temp = new int[size - 2];
        for (int i = 0, k = 0; i < size; i++) {
            if (num[i] != highest && num[i] != lowest) {
                temp[k] = num[i];
                k++;
            }
        }
        delete[] num;
        num = temp;
        getNhighestandNlowest(num, size - 2, n, ++counter);
    }
    else {
        initHighestAndLowest(highest, lowest, num)
        getHighestAndLowest(num, highest, lowest, size)
        delete[] num;
        cout << "The nth (" << n << ") Highest number is: " << highest << endl;
        cout << "The nth (" << n << ") Second Lowest number is: " << lowest;
        return;
    }
}


int main() {
    cout << "Enter Size of Array: ";
    read(int, size);
    createAndinputArr(int, num, size)
    cout << "Enter the nth value of the highest and lowest number you want: ";
    read(int, n);
    getNhighestandNlowest(num, size, n);
    return 0;
}