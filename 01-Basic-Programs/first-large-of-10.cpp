// Write a program to find the largest of 10 numbers using the ternary operator.

#include <iostream>
using namespace std;

int main() {
    int num, largest;

    cout << "Enter 10 numbers:" << endl;

    cin >> largest;

    for (int i = 2; i <= 10; i++) {
        cin >> num;

        largest = (num > largest) ? num : largest;
    }

    cout << "Largest number = " << largest << endl;

    return 0;
}