#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 
    //Q2 Print this pattern, In single loop.
    /*
    *    
    **   
    ***  
    **** 
    *****
    */

    for(int i=1;i<=5;i++)
    {
        cout << setw(i+1) << setfill('*') << "\n";
    }
 
}