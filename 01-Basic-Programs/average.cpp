//Write a program using a for loop to calculate the average of the first <span class="katex-error" title="ParseError: KaTeX parse error: Unexpected character: '&#x27; at position 2: n\̲" style="color:#cc0000">n</span> natural numbers.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    float average;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}