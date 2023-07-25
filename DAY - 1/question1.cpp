#include<iostream>
using namespace std;

int main()
{
 
    /*
    Q1.  Write a program to input a number from 
        user and find that mid digit of that 
        number is Even or not.
    */

   // Solution

    char str[10];
    int a,t,len,b;

    cout << "Enter a number: ";
    cin >> str;

    a = atoi(str);
    t = a;

    for(len = 0;t>0;(len++),(t = t/10));
    b = len/2;
    (str[b]%2==0)?cout << "Even number":cout << "Odd number";
}