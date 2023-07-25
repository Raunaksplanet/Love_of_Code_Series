#include<iostream>
using namespace std;

int main()
{
 
    /*
    Q2.  Perform Array rotation.
    */

   //Solution

   int arr[10], tmp[10], pos, i, j;

    cout << "Enter data in array: ";
    for(i=0;i<10;i++)
    {
        cin >> arr[i];
    }

    cout<< "Enter positon to rotate array: ";

    cin >> pos;

    for(i=0;i<pos;i++)
    {
        tmp[i]= arr[i];
    }

    for(i=pos;i<10;i++)
    {
        cout << arr[i] << " ";
    }

    for(i=0;i<pos;i++)
    {
        cout << tmp[i] << " ";
    }
 
}