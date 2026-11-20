// Write a program to swap two numbers using a temporary variable.
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nBefore swapping:";
    cout << "\na = " << a;
    cout << "\nb = " << b;

    // Swapping using temporary variable
    temp = a;
    a = b;
    b = temp;

    cout << "\n\nAfter swapping:";
    cout << "\na = " << a;
    cout << "\nb = " << b;

    return 0;
}