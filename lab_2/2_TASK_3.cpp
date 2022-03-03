#include <iostream>
#include <bitset>
#include <string>

using namespace std;

// Condition for valid base
#define IncorrectBase base != 2 && base != 8 && base != 10 && base != 16 

// Prompt and input if invalid base is entered
#define enterBaseAgain cout << "Invalid Base entered! Please re-enter: "; cin >> base;

// Prompt and Input if invalid number is entered
#define enterNumAgain(num)  cout << "Invalid Number for this Base!\nPlease Re-enter: "; cin >> num; 

// Declare and read a variable of specific type
#define read(type, var) type var; cin>>var;

// Enter a base until it is valid
#define enterBase(type, base) cout << "Enter base system: \n"; read(type, base);  while(IncorrectBase) { enterBaseAgain } 

// Output the result in the given format
#define outputResult(num1, num2, result) cout << "(" << num1 << ")" << " + " << "(" << num2 << ") = " << result; 

// Check and take input a number of the base till the number is valid
#define validNum(num, base) read(string, num) while (!isValidBase(num, base)) { enterNumAgain(num) }

// Read two valid numbers for the base given
#define readTwo(type, num1, num2, base) \
    cout << "Enter a number: \n";       \
    validNum(num1, base) ;              \
    cout << "Enter another number: \n"; \
    validNum(num2, base);               \

// Compute the sum of the addition of the two numbers
#define add(x1, x2, sum)              \
    int sum = 0;                      \
    while(x2 != 0) {                  \
        int temp_carry = x1 & x2;     \
        x1 = x1 ^ x2;                 \
        x2 = temp_carry << 1;         \
    }                                 \
    sum = x1;                         \

// Convert numbers entered to denary first, add them them convert them back to their orignal base
#define getResult(val1, val2, result, base, valAns)   \
    int val1 = toDen(num1, base);                     \
    int val2 = toDen(num2, base);                     \
    add(val1, val2, result);                          \
    string valAns= decToBase(result, base);           \

// Add on to the total value of addition
#define addToDecVal(decval, val, character, pos, base) \
    decval += (int(val) - character)* pos;             \
     pos*= base;                                       \

// Reverse string input
#define reverseStr(n)                                    \
    int len = n.length();                                \
    for (int i = 0; i < len / 2; i++)                    \
        swap(n[i], n[len - i - 1]);                      \

// Check if number entered is valid for the base
bool isValidBase(string& val, int base) {      
    
    // check each character and compare it to the base
    for (int i = 0; i < val.length(); i++) {
        if ((isdigit(val[i]))) {     // if chracter is a digit      
            if (int(val[i]) - 48 >= base) 
                return false;
        }
        else if (isupper(val[i])) { // if character is an uppercase alphabet
            if (int(val[i]) - 55 >= base)
                return false;
        }
        else // if character is any other invalid character
            return false;
    }
    return true;
}

// Convert decimal value to value in the particular base
string decToBase(int n, int _base)
{
    string deciNum;
    while (n != 0) { // while end of the number has not been reached
        int digit = n % _base; 
        n = n / _base;
        // After calculation convert number to character and append to answer string
        (digit > 9) ? deciNum.push_back(char(digit + 55)) : deciNum.push_back(char(digit + 48));
    }
    // Reverse the output of the string so that it is in correct order
    reverseStr(deciNum);
    return deciNum;
}

int toDen(string val, int _base)
{
    int len = val.size(), base = 1, dec_val = 0;

    for (int i = len - 1; i >= 0; i--) {
            if (isdigit(val[i])) { // check if number is a digit to add appropiate value to the ansert
                addToDecVal(dec_val, val[i], '0', base, _base)
            }
            else { // if a number is not a digit it will be a character since we already made a validation check
               addToDecVal(dec_val, val[i], 'A' - 10 , base, _base)
            }
    }
    return dec_val; // return the decimal equivalent of the number
}

int main() {
    enterBase(int, base)  // Enter a valid base (2, 8, 10, 16)
    readTwo(string, num1, num2, base); // Read two valid numbers for that particular base
    getResult(val1, val2, result, base, finalAns); // co pute the sum of the numbers from that given base
    outputResult(num1, num2, finalAns); // Output the result in the format given in the task
    return 0;
}
