//Write a program to generate the calendar of a month given its starting day and the number of days in that month.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int startDay, days;

    cout << "Enter starting day (0=Sunday, 1=Monday, ..., 6=Saturday): ";
    cin >> startDay;

    cout << "Enter number of days in the month: ";
    cin >> days;

    if (startDay < 0 || startDay > 6 || days < 1 || days > 31) {
        cout << "Invalid input!";
        return 0;
    }

    cout << "\nSun Mon Tue Wed Thu Fri Sat\n";

    // Print spaces before the first date
    for (int i = 0; i < startDay; i++) {
        cout << "    ";
    }

    // Print dates of the month
    for (int date = 1; date <= days; date++) {
        cout << setw(3) << date << " ";

        if ((startDay + date) % 7 == 0) {
            cout << endl;
        }
    }

    cout << endl;

    return 0;
}