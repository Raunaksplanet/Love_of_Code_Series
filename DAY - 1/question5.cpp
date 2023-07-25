#include<iostream>
using namespace std;

int main()
{
 
    /*
    5.  .Write a program to input a string 
        from user and print all the character 
        at odd indexes
    */

   // Solution

   char str[10];
    cout << "Enter a string: ";
    cin >> str;

    int i, len, j;
    for(i=0;str[i]!='\0';i++);
    len = i;

    for(j = 0;j <len;j++)
    {
        if(j %2 != 0)
        {
            printf("%c",str[j]);
        }
    }
 
}