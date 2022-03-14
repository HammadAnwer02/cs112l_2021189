#include <iostream>
#include <string>

#define read(type, var) type var; cin >> var;

using namespace std;


class stringType {
    private:
        string first;
        string second;
    public:
        stringType() {
            first = "";
            second = "";
        }
        void setValues (string str1, string str2) {
            first  = str1;
            second = str2;
        }
        void printValues () {
            cout << "The first string is: " << first << endl;
            cout << "The second string is: " << second  << endl;
        }
        int maxLength() {
            int i, j  = 0;
            while (1) {
                if (first[i] != '\0') {
                    i++;
                }
                if (second[j] != '\0') {
                    j++;
                }
                if (second[j] == '\0' && first[i] == '\0') {
                    break;
                }
            }
            return (i > j) ? i : j;
        }
        int compare (string s1, string s2) {
            int compVal = 0;
            stringType mystr;
            mystr.setValues(s1, s2);
            for (int i = 0; mystr.first[i] != '\0' && mystr.second[i] != '\0'; i++) {
                if (mystr.first[i] > mystr.second[i]) {
                    compVal += mystr.first[i] - mystr.second[i];
                } 
                else if (mystr.first[i] < mystr.second[i]) {
                    compVal += mystr.first[i] - mystr.second[i];
                }
            }
            return compVal;
        }
        void copy (string source, string destination) {
            destination = source;
        }
        string concatenate (string s1, string s2) {
            string s3 = s1+s2;
            return s3;
        }
        int searchWord(string word) {
            bool check = true;
            for (int i = 0; first[i] != '\0'; i++) {
                if (word[i] != first[i]) {
                    check = false;
                }
            }
            if (check) {
                return 1;
            }
            check = true;
            for (int i = 0; second[i] != '\0'; i++) {
                if (word[i] != second[i]) {
                    check = false;
                }
            }
            if (check) {
                return 1;
            }
            else {
                return 0;
            }


        }
        int searchChar(char ch) {
            for (int i = 0; first[i] != '\0'; i++) {
                if (ch == first[i]) {
                    return 1;
                }
            }
            for (int j = 0; second[j] != '\0'; j++) {
                if (ch == second[j]) {
                    return 1;
                }
            }

            return 0;
        }
        ~stringType() {
            cout << "Destructor called!";
        }

};


#define printMenu \
    cout << "\nPlease Choose one of the following options: \n";\
    cout << "\n1) setValues\n";\
    cout << "2) printValues\n";\
    cout << "3) maxLength\n";\
    cout << "4) compare\n";\
    cout << "5) copy\n";\
    cout << "6) concatenate\n";\
    cout << "7) searchWord\n";\
    cout << "8) searchChar\n";\
    cout << "9) Exit\n";



// int getLenght(string s) {
//     int i = 0;
//     for(; s[i] != '\0'; i++);
//     return i;
// }

int main() {
    printMenu
    read(int, option)
    stringType str1;
    while (option != 9) {
        switch (option)
        {
        case 1: {
            cout << "Enter a string: ";
            string s1, s2;
            cin.ignore();
            getline(cin, s1);
            cout << "Enter another string: ";
            getline(cin, s2);
            str1.setValues(s1, s2);
            break;
        }
        case 2:
            str1.printValues();
            break;
        case 3:
            cout << "The max length is: " << str1.maxLength() << endl;
           
            break;
        case 4: {
            cout << "Enter a string: ";
            string s1, s2;
            cin.ignore();
            getline(cin, s1);
            cout << "Enter another string: ";
            getline(cin, s2);
            cout << str1.compare(s1, s2) << endl;
            break;
        }
        case 5: {
            cout << "Enter a string: ";
            string s1, s2;
            cin.ignore();
            getline(cin, s1);
            cout << "Enter another string: ";
            getline(cin, s2);
            str1.copy(s1, s2);
            break;
        }
        case 6: {
            cout << "Enter a string: ";
            string s1, s2;
            cin.ignore();
            getline(cin, s1);
            cout << "Enter another string: ";
            getline(cin, s2);
            cout << str1.concatenate(s1, s2) << endl;
            break;
        }
        case 7: {
            cout << "Enter a string: ";
            string s1;
            cin.ignore();
            getline(cin, s1);
            cout << str1.searchWord(s1) << endl;
            break;
        }
        case 8: {
            cout << "Enter a character: ";
            char c1;
            cin >> c1;
            cout << str1.searchChar(c1) << endl;
            break;
        }

        default:
            break;
        }
        system("pause");
        printMenu
        cin >> option;
    }
    return 0;
    
}