// Write a program to print the following number pattern:
// 1
// 121
// 12321
// 1234321

#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 4; i++) {

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}