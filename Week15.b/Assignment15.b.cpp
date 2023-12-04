// Elena Curmei
// CIS 1202 201
// December 3, 2023

#include<iostream>
using namespace std;

//using template to receive and return any of the data type value
template <typename T>

//Define functions named "half" that accept a single argument, and return a value of that same type.
T half(T val) {
    T res;
    res = val / 2;
    if (*typeid(val).name() == 'i') {//as we need to round off the value, when val is of int type
        if (res * 2 != val) {//since we know for odd integer value divisiom with 2 give .5 less, and we need to round up 0.5 or higher values  
            res++;//so we are increasing the number;
        }
    }
    return res;//returning the half value
}

//Build a driver in main to test these functions and display their output.
int main() {
    double a = 7.00;
    float b = 5.0f;
    int c = 3;
    //printing all the half values
    cout << "Half values of : \n";
    cout << "\t      " << a << ": " << half(a) << "\n";
    cout << "\t      " << b << ": " << half(b) << "\n";
    cout << "\t      " << c << ": " << half(c) << "\n";
}