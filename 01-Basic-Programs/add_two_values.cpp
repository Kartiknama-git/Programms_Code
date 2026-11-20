// Write a program to add two values of different data types using static polymorphism
#include <iostream>
using namespace std;

class Addition {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add two floating-point values
    float add(float a, float b) {
        return a + b;
    }

    // Function to add an integer and a float
    float add(int a, float b) {
        return a + b;
    }
};

int main() {
    Addition obj;

    cout << "Addition of two integers: "
         << obj.add(10, 20) << endl;

    cout << "Addition of two float values: "
         << obj.add(5.5f, 2.5f) << endl;

    cout << "Addition of integer and float: "
         << obj.add(10, 5.5f) << endl;

    return 0;
}
