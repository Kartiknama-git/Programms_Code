// Write a program to perform addition, subtraction, multiplication, and division on two integers.
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "\nAddition = " << num1 + num2;
    cout << "\nSubtraction = " << num1 - num2;
    cout << "\nMultiplication = " << num1 * num2;
    if (num2 != 0) {
        cout << "\nDivision = " << (float)num1 / num2;
    }
    else {
        cout << "\nDivision is not possible (divide by zero).";
    }

    return 0;
}