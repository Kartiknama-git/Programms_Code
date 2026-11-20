// Write a program to classify a given number as prime or composite.
#include <iostream>
using namespace std;

int main() {
    int num, i, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is neither Prime nor Composite.";
    }
    else {
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                count++;
            }
        }

        if (count == 2) {
            cout << num << " is a Prime Number.";
        }
        else {
            cout << num << " is a Composite Number.";
        }
    }

    return 0;
}