#include<iostream>
using namespace std;


int main()
{
 
    //Q5 What should be the condition when following code snippet print both hello world:- 
    /*
    if ("condition")
        printf("Hello ");
    else
        printf("World");
    */

   if (!printf("Hello "))
        printf("Hello ");
    else
        printf("World");
 
}