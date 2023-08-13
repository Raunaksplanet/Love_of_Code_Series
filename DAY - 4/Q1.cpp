#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    // Q1. Reverse a string and not a character array

    // ans1. Reverse a string and not a character array.
    string str;

    cout << "Enter String: ";
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << str;
}