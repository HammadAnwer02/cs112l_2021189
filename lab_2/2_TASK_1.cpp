#include <iostream>

using namespace std;

#define read(type, var) type var; cin>>var;

#define isPowerTwo(x) if(x&(x-1)) { cout << "No "  << x << " is not the power of 2\n" ;} else {cout << "Yes " << num << " is the power of 2\n";}

int main() {

    read(int, num);
    isPowerTwo(num);
    
}
