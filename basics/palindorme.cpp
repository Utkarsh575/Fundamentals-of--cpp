#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, rev;
    getline(cin, str1);
    // mama size 4 ; 0,1,2,3   0=m; 1=a; 2=m; 3=a   ""
    for (int i = str1.size() - 1; i >= 0; i--)
    {
        rev.push_back(str1[i]);
    }
    cout << rev << " = reverse" << endl;
    if (str1 == rev)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}