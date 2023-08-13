#include <iostream>
using namespace std;

int main()
{

    // Q4. Swapping in single line.
    // ans4. Swapping in single line.

    int a, b;
    cout << "Enter 1st Value: ";
    cin >> a;
    cout << "Enter 2nd Value: ";
    cin >> b;

    cout << "Before\nA = " << a << " B = " << b;

    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    (a != b) ? (a ^= b ^= a ^= b) : a;

    cout << "\nBefore\nA = " << a << " B = " << b;
}