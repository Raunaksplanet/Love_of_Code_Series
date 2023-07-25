#include<iostream>
using namespace std;

int main()
{
 
    /*
    4.  Write a program to input a number from user and break into 3 parts.
        EG: if n = 15
        then a = 3 (can be random)
        b = 7 (should be larger then first one)
        c = 5 (shoulder be larger then first one)
        total  = 15
    */

    int x,a,b,c;

    cout << "Enter a number: ";
    cin >> x;

    a = x/5;
    b = x/3;
    c = x - (a+b);

    cout << "First Value is " << a << endl;
    cout << "Second Value is " << b << endl;
    cout << "Third Value is " << c << endl;
 
}