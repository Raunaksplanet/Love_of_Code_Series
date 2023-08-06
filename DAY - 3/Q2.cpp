#include<iostream>
using namespace std;

int main()
{
 
    //2. Write a program to find lenth of string entered by user without using
    //   string function and using for loop.

    //ans2
   string str;
   int count;
   cout << "Enter a String: ";
   cin >> str;
   for(count = 0; str[count] != '\0'; count++);
   cout << "Length of String is " << count;

 
}