#include<iostream>
using namespace std;

int main()
{
    /*
    3. Write a program to input money amount from user and break down it in Indian currency system,
      for Eg:- if amount = 2375, breakdown = 2000  100  100  100  50  20  5.
    */

    //ans3
   int arr[9] = {2000, 500, 100, 50, 20, 10, 5, 2, 1};
   int amount;

   cout << "Enter a number: ";
   cin >> amount;

   cout << "Amount is " << amount;
   cout << "Breakdown:-" << endl;
   for (int i = 0; i < 9; i++)
   {
      while(amount>=arr[i])
      {
         cout << arr[i] << "  ";
         amount -= arr[i];
      }
   }
}