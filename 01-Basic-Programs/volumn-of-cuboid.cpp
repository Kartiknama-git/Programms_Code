//Write a program to calculate the volume of a cuboid using default arguments.
#include <iostream>
using namespace std;

// Function with default arguments
float calculateVolume(float length, float breadth = 2, float height = 3) {
    return length * breadth * height;
}

int main() {
    float length, breadth, height;

    cout << "Enter length of cuboid: ";
    cin >> length;

    cout << "\nVolume using default arguments = "
         << calculateVolume(length);

    cout << "\nVolume using all arguments = "
         << calculateVolume(length, 4, 5);

    return 0;
}