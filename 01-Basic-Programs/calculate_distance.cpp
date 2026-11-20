// Write a program to calculate the distance between two points.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, distance;
    cout << "Enter first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter second point (x2, y2): ";
    cin >> x2 >> y2;
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Distance between two points = " << distance;

    return 0;
}