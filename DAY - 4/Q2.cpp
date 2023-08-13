#include <iostream>
using namespace std;

int main()
{
    // Q2. replace duplicate character from string with 0.
    // ans2. replace duplicate character from string from 0.

    string str;
    cout << "Enter String: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                str[j] = '0';
            }
        }
    }
    cout << str;
}