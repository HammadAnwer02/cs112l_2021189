#include <iostream>


using namespace std;



enum Months { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };

struct DateOfBirth {
    int day;
    Months month;
    int year;
};
struct User {
    string name;
    int age;
    string city;
    DateOfBirth dob;
};


Months check_month(string);
void check_dob(User[], int, int, Months, int);

int main() {
    User users[10];
    int num_users;
    cout << "Enter the number of users: ";
    cin >> num_users;
    for (int i = 0; i < num_users; i++) {
        string month = "";
        cout << "Enter the data for " << i << " student: \n\n";
        cout << "Enter the name: ";
        cin >> users[i].name;
        cout << "Enter the age: ";
        cin >> users[i].age;
        cout << "Enter the city: ";
        cin >> users[i].city;
        cout << "Enter the D.O.B: \n";
        cout << "Enter the day: ";
        cin >> users[i].dob.day;
        cout << "Enter the month: ";
        cin >> month;
        users[i].dob.month = check_month(month);
        cout << "Enter Year: ";
        cin >> users[i].dob.year;



    }
    int day;
    string m;
    Months mo;
    int year;
    cout << "Enter a D.O.B  to check: \n";
    cout << "Enter a day: ";
    cin >> day;
    cout << "Enter the month: ";
    cin >> m;
    mo = check_month(m);
    cout << "Enter Year: ";
    cin >> year;
    check_dob(users, num_users, day, mo, year);

}
Months check_month(string m) {
    if (m.compare("Jan") == 0)
        return Jan;
    else if (m.compare("Feb") == 0)
        return Feb;
    else if (m.compare("Mar") == 0)
        return Mar;
    else if (m.compare("Apr") == 0)
        return Apr;
    else if (m.compare("May") == 0)
        return May;
    else if (m.compare("Jun") == 0)
        return Jun;
    else if (m.compare("Jul") == 0)
        return Jul;
    else if (m.compare("Aug") == 0)
        return Aug;
    else if (m.compare("Sep") == 0)
        return Sep;
    else if (m.compare("Oct") == 0)
        return Oct;
    else if (m.compare("Nov") == 0)
        return Nov;
    else if (m.compare("Dec") == 0)
        return Dec;
    else {
        return Jan;
    }
}


void check_dob(User user[], int size, int day, Months month, int year) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (user[i].dob.day == day && user[i].dob.month == month && user[i].dob.year == year) {
            found = true;
            cout << "It is " << user[i].name << "'s Birthday. Happy Birthday, " << user[i].name << ".\n";
        }
    }
    if (!found)
        cout << "No user has this birthday!\n";
}
