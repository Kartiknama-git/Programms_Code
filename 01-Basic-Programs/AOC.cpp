// Write a program to calculate the area of a circle using a function.

#include <iostream>
using namespace std;

// Function to calculate area of circle
float calculateArea(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    float radius, area;

    cout << "Enter the radius of circle: ";
    cin >> radius;

    area = calculateArea(radius);

    cout << "Area of circle = " << area << endl;

    return 0;
}