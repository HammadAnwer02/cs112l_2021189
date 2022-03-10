#include <iostream> 


using namespace std;





class small_set {
    private: 
    int counter = 0;
    int max = 5;

    int *arr = new int[max];

    public:
   
    void set(int item);
    void clear(int item);
    int test(int num);
    void print();
};


void small_set::set(int item) {
    if (counter < max) {
        if (item >= 0 && item <= 32) {
            if (test(item) != 1)
                arr[counter] = item;
                counter++;
        }
        else {
            cout << "Number entered is invalid.\n";
        }
    }
    else {
        max++;
        int *temp = new int[max];
        int i = 0;
        for (; i< max; i++) {
            temp[i] = arr[i];
        }
        delete [] arr;
        arr = temp;
        if (item >= 0 && item <= 32) {
            if (test(item) != 1)
                arr[counter] = item;
        }
        else {
            cout << "Number entered is invalid.\n";
        }
    }
    
}

void small_set::clear(int item) {


    int counter = 0;
    int *temp = new int[max-1];
    

    for (int i = 0; i< max; i++)
    {
        if (arr[i] != item) {
            temp[counter] = arr[i];
            counter++;
        }
    }
    max--;
    delete [] arr;
    arr = temp;
   
    }


int small_set::test(int num) {
    for (int i = 0; i< max; i++) {
        if (arr[i] == num) {
            return 1;
        }
    }
    return 0;
}

void small_set::print() {
    for (int i = 0; i< max; i++) {
        if (arr[i] != -1)
            cout << arr[i] << endl;
    }
}



#define printMenu \
    cout << "Please choose one of the following options: \n"\
    << "1) To Set the element\n"\
    << "2) To clear the element\n"\
    << "3) To to test if number is in the set\n"\
    << "-1) to exit\n";

int main() {


    small_set s1;
    int option ;
        printMenu

    cin >> option;

    while (option != -1) {
        switch (option)
        {
        case 1:
        cout << "Enter the value you want to set: ";
        int num;
        cin >> num;
        s1.set(num);
        break;
        case 2: {
        cout << "Enter the value you want to clear: ";
        int num;
        cin >> num;
        s1.clear(num);
        break;}
        case 3:{
            cout << "Enter the number you want to test: ";
            int num;
        cin >> num;
        cout << s1.test(num) << endl;
        break;
        }
        
        default:
            break;
        }
        system("pause");
        cout << "\n\nEnter another option: \n\n";
        printMenu
        cin >> option;
    }


}