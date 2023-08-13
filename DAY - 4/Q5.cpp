#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /*
    Q5. if string str = 12345.
    output:
        54321
        4321
        321
        21
        1
    */
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    reverse(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
    {
        cout << str.substr(i, str.length()) << "\n";
    }
}