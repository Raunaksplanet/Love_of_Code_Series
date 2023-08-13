#include <iostream>
using namespace std;

int main()
{

    // Q3. find maximum value between 3 elements in single line.
    // ans3. find maximum value between 3 elements in single line.
    int a = 18, b = 23, c = 15, d = 55;

    d = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
    cout << "Maximum Value is " << d;
}