#include <bits/stdc++.h>
using namespace std;

//make a program to input string and print its reverse\

int main()
{
    string str1;
    getline(cin, str1);

    string str2 = "";
    for (int i = str1.size() - 1; i >= 0; i--)
    {
        // str2 = str2 + str1[i]; not use due to time complexity
        str2.push_back(str1[i]);
    }
    cout << str2;
    if (str1 == str2)
    {
        cout << "PALINDORME" << endl;
    }
    else
    {
        cout << "NOT PLAINDROME" << endl;
    }
    return 0;
}