#include<iostream>
using namespace std;

int main()
{
 
    // 3. sort and print all even elements 
    //    in array first then print all odd elements.

    // Solution

    int arr[10];
    cout << "Enter elements in array: ";
    
    for(int i =0;i<10;i++)
    {
        cin >> arr[i];
    }

    for(int i = 0;i<10;i++)
    {
        if(arr[i] %2==0)
        {
            cout << arr[i]<< "  ";
        }
    }

    for(int i = 0;i<10;i++)
    {
        if(arr[i] %2!=0)
        {
            cout << arr[i]<< "  ";
        }
    }
    
}