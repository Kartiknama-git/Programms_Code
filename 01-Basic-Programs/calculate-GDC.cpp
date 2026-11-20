//Write a program to calculate the GCD of two numbers using a recursive function.
#include <iostream>
using namespace std;

// Recursive function to calculate GCD
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }

    return findGCD(b, a % b);
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int gcd = findGCD(num1, num2);

    cout << "GCD of " << num1 << " and "
         << num2 << " = " << gcd << endl;

    return 0;
}