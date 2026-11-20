//Write a program to calculate the sum of the series <span class="katex-error" title="ParseError: KaTeX parse error: Unexpected character: '&#x27; at position 27: …+ 33/3 + \cdots\̲" style="color:#cc0000">1/1 + 22/2 + 33/3 + \cdots</span>.
#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int numerator = i * 11;
        sum = sum + (float)numerator / i;
    }

    cout << "Sum of the series = " << sum;

    return 0;
}