#include <iostream>
#include <stdlib.h>
#include <time.h>







using namespace std;





class twoDArray {
    private:
        const static int size = 2;
        int arr1[size][size];
        // int arr2[size][size];
        // int arr3[size][size];
    public:


        void initialize() {
            
            cout << "Enter the values for the first array: ";
            for (int i = 0; i< size; i++) {
                for (int j = 0; j< size; j++) {
                    cin >> arr1[i][j];
                }
            }
        }

        void print() {
            cout << "The value in the first array is: " << endl;
            for (int i = 0; i< size; i++) {
                for (int j = 0; j < size; j++) {
                    cout << arr1[i][j] << "\t";
                }
                cout << endl;
            }

        }

        void transpose() {
            int arr2[size][size];
            for (int i = 0; i < size; i++) {
                for (int j = 0; j< size; j++) {
                    arr2[i][j] = arr1[j][i];
                }
            }

            for (int i = 0; i< size; i++) {
                for (int j = 0; j< size; j++) {
                    arr1[i][j] = arr2[i][j];
                }
            }
        }

        void isSymmetric() {
            int arr2[size][size];
            for (int i = 0; i< size; i++) {
                for (int j = 0; j< size; j++) {
                    arr2[i][j] = arr1[i][j];
                }
            }
            transpose();
            bool check = true;
            for (int i = 0; i< size; i++) {
                for (int j = 0; j < size; j++) {
                    if (arr1[i][j] != arr2[i][j]) {
                        check = false;
                    }
                }
            }
            if (check) {
                cout << "The array is symmetric!\n";
            }
            else {
                cout << "The array is not symmetric! \n";
            }
            transpose();
        }


    
    twoDArray multiply(twoDArray obj1, twoDArray obj2) {
       twoDArray obj3;

       for (int i = 0; i< size ; i++) {
           for (int j = 0; j < size; j++) {
               for (int k = 0; k < size; k++){
                   obj3.arr1[i][j] *= 0;
                    obj3.arr1[i][j] +=  (obj1.arr1[i][k] * obj2.arr1[k][i]);    
               }
           }
       }
       return obj3;
    }
};



#define printMenu \
    cout << "Please choose one of the following options: \n"\
    << "1) To Initiallize Array\n"\
    << "2) To check if the matrix is symmetric\n"\
    << "3) To get the transpose of the matrix\n"\
    << "4) To multiply two matrix\n"\
    << "5) To Print the array\n"\
    << "-1) to exit\n";
    
int main(){
    twoDArray num;

    int option ;
    printMenu

    cin >> option;

    while (option != -1) {
        switch (option)
        {
        case 1:
            num.initialize();
            break;
        case 2:
            num.isSymmetric();
            break;
        case 3:
            num.transpose();
            break;
        case 4:
            twoDArray a;
            a.initialize();
            twoDArray b;
            b.initialize();
            num = num.multiply(a, b);
            break;
        case 5:
            num.print();
            break;
        default:
            break;
        }
        system("pause");
        cout << "\n\nEnter another option: \n\n";
        printMenu
        cin >> option;
    }
    


}