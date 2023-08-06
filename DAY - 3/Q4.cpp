#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 
    /*
    4.Print this pattern
   1
    2
     3
      4
       5
        6
         7
          8
           9
            10
   In single loop.
    */

   //ans4
   int i = 1;
   while(i<=10)
   {
      cout << setw(i) << i << "\n";
      i++;
   }
 
}