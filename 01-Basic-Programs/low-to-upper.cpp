// Write a program to convert a lowercase character into uppercase.
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a lowercase character: ";
    cin >> ch;

    // Convert lowercase to uppercase
    ch = ch - 32;

    cout << "Uppercase character = " << ch << endl;

    return 0;
}