#include<iostream>
using namespace std;

int main()
{
 
       int n;
       cout << "Enter a number: ";
       cin >> n;
       for(int i=1;i<=n;i++)
       {
        printf("%c",64 + n);
       }
 
}