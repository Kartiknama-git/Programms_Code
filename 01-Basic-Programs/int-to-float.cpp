// Write a program to convert an integer into its corresponding floating-point number.
#include <iostream>
using namespace std;

int main() {
    int num;
    float fnum;

    cout << "Enter an integer: ";
    cin >> num;

    // Type conversion from int to float
    fnum = (float)num;

    cout << "Integer value = " << num << endl;
    cout << "Floating-point value = " << fnum << endl;

    return 0;
}