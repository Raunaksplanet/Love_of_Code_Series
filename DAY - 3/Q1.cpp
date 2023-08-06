#include<iostream>
using namespace std;

int main()
{
 
    //1. Write a program to find lenth of number entered by user using for loop.

    // Ans 1
   int n, count;
   cout << "Enter a number: ";
   cin >> n;
   for (count = 0; n > 0; count++, n = n / 10);
   cout << "Number of digits is " << count;
 
}