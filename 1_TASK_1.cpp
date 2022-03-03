#include <iostream>
#include <string>
#include <iomanip>



using namespace std;


// struct Course {
//     int credit_hours;
//     int grade_point;
// }

const float A = 4;
const float A_neg = 3.67;
const float B_pos = 3.33;
const float B = 3.00;
const float B_neg = 2.67;
const float C_pos = 2.33;
const int credit_hours = 3;

struct Student {
    string name;
    string reg_no;
    string degree_program;
    int num_courses;
    int courses[20];
    float sgpa = 0;
};


float find_sgpa(float total, int num_courses);
// void sort_students(Student[], int);

void print_students(Student[], int);

int main()
{
    Student stds[10];
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;
    for (int i = 0; i < num_students; i++) {
        cout << "Enter record for the " << i << " student: \n\n";
        float total = 0;
        cout << "Enter the name: ";
        cin.ignore();
        getline(cin, stds[i].name);
        cout << "Enter the reg. no: ";
        getline(cin, stds[i].reg_no);
        cout << "Enter the degree program: ";
        getline(cin, stds[i].degree_program);
        int num_courses;
        cout << "Enter the number of courses: ";
        cin >> stds[i].num_courses;
        num_courses = stds[i].num_courses;
        for (int j = 0; j < num_courses; j++) {
            cout << "Enter the marks for the " << j + 1 << " course: ";
            cin >> stds[i].courses[j];
            total += stds[i].courses[j] * 3;

        }
        stds[i].sgpa = find_sgpa(total, num_courses);
    }
        print_students(stds, num_students);


}



float find_sgpa(float total, int num_courses) {
    float gp = total / (num_courses * 3);
    if (gp > 86) {
        return A;
    }
    else if (gp > 82 && gp <= 86) {
        return A_neg;
    }
    else if (gp > 78 && gp <= 82) {
        return B_pos;
    }
    else if (gp > 74 && gp <= 78) {
        return B;
    }
    else if (gp > 70 && gp <= 74){
        return B_neg;
    }
    else if (gp > 66 && gp <= 70) {
        return C_pos;
    }
    else {
        return 2.00;
    }
}





void print_students(Student stds[], int size) {
    cout << "S.No" << setw(20) << "Name" << setw(10) << "Reg. No." << setw(20) << "Degree Program" << setw(10) << "SGPA\n\n";
    for (int i = 0; i < size; i++) 
    {
        cout << setw(4) << i;
        cout << setw(20) << stds[i].name;
        cout << setw(10) << stds[i].reg_no;
        cout << setw(20) << stds[i].degree_program;
        cout << setw(10) << stds[i].sgpa;
        cout << "\n\n";
    }
}

// void sort_students(Student std[], int size) 
// {
//     for (int i = size; i>0; i--) {
//         for (int j = 0; j < i - 1) {
//             if (stds[j].sgpa < stds[j].sgpa) {
//                 Student temp = stds[j];
//                 stds[j] = stds[j+1];
//                 stds[j+1] =temp;
//             }
//         }
//     }

// }