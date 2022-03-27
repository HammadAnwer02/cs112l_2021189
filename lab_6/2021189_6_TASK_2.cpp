#include <iostream>
#include<string>


using namespace std;


#define read(type, var) type var; cin >> var;

#define printOption \
    cout << "Please select the desired option: \n"\
    << "1. Enter id of officer.\n"\
    << "2. Get total number of officers\n"\
    << "3. Exit\n";\




/**
 * @brief Get the Reverse object
 * 
 * @param num 
 * @return int 
 */

int getReverse (int num) {
    int place = 10; // The place where the digit goes
    int count = 1; // I have this variable just in case there is a zero in between the numbers so that we still get the same answer
    bool check = false;

    int temp = 0; // stores the reverse number
    while (num != 0) { // while there is some of the number left
        int digit = num % 10; // gets the last digit
        temp += digit; // adds the digit to correct place
        if (digit == 0) {
            count*= 10;
            check = true;
        }
        else {
            count = 1;
            check = false;
        }
        if (check) {
            temp *= count;
        }
        else {

        temp *= place;
        }
        num /= 10; // reduce the number
    }
    temp /= place; // to get the final answer and negate the last multiply by 10
    return temp; // return the reverse number
}

class Officer {
        int id;
        string name;
        string rank;
        static int countOfficers; // keeps track of number of officers that were allowed 

    public:
        Officer(int _id = 0, string _name = "", string _rank = "") {
            id = _id;
            name = _name;
            rank = _rank;
        }
        // check and get officer entry
        
        void entry() {
            int reverse = getReverse(id);
            if (id != reverse) {
                cout << "The officer is allowed entry to the restricted area.\n";
                countOfficers++;
            }
            else {
                cout << "The officer is not allowed entry to the restricted area.\n";
            }
        }

        void setId(int _id, string _name, string _rank) {
            id = _id;
            name = _name;
            rank = _rank;
            entry();   
        }

        
        int getOfficerCount() {
            return countOfficers;
        }



};

int Officer::countOfficers;

int main() {
    
    Officer o1;
    
    printOption
    read(int, option)
    while(option != 3) {
         switch (option)
    {
    case 1: { 
        int id = 0;
        string name = "";
        string rank = "";
        cout << "Enter the ID of the officer: ";
        cin >> id;
        cout << "Enter the name of the officer: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter the rank of the officer: ";
        getline(cin, rank);
        o1.setId(id, name, rank);
        break;
    }
    case 2:
        cout << "Total count of officers is: " << o1.getOfficerCount() << endl;
        break;
    
    default:
        break;
    }
    system("pause");
    printOption
    cin >> option;
    }
   
    
    return 0;
}