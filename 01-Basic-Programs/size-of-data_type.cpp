// Write a program to display the size of every fundamental data type in C++.
#include <iostream>
using namespace std;

int main() {
    cout << "Size of Fundamental Data Types in C++\n\n";

    cout << "Size of char          = " << sizeof(char) << " bytes" << endl;
    cout << "Size of int           = " << sizeof(int) << " bytes" << endl;
    cout << "Size of float         = " << sizeof(float) << " bytes" << endl;
    cout << "Size of double        = " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool          = " << sizeof(bool) << " bytes" << endl;
    cout << "Size of wchar_t       = " << sizeof(wchar_t) << " bytes" << endl;
    cout << "Size of short         = " << sizeof(short) << " bytes" << endl;
    cout << "Size of long          = " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long     = " << sizeof(long long) << " bytes" << endl;
    cout << "Size of long double   = " << sizeof(long double) << " bytes" << endl;
    cout << "Size of void*         = " << sizeof(void*) << " bytes" << endl;

    return 0;
}