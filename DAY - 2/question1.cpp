#include<iostream>
using namespace std;

int sum(int a,int b)
{
    cout << a + b << endl;
}
int sum(int a,int b,int c)
{
    cout << a + b + c << endl;
}
int sum(int a,int b,int c,int d)
{
    cout << a + b + c + d << endl;
}

int main()
{
 
    //Q1 Perform Function Overloading.
    sum(2,2);
    sum(2,2,2);
    sum(2,2,2,2);
 
}