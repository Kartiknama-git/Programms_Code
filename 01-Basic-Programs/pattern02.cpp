//Write a program to print the following alphabet pattern:
// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }

    return 0;
}