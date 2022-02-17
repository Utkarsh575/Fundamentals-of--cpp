#include<iostream>

using namespace std;
int main() {
    int n, i, k;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    // Printing the upper part of Diamond Pattern
    // i is the number of stars we print in
    // each iteration of loop
    for (int i = 1; i <= n; i = i + 2)
    {
        // printing (n-i)/2 spaces
        for (k = 1; k <= (n - i) / 2; ++k)
        {
            cout<<" ";
        }
        // printing i '*"
        for (k = 1; k <= i; ++k)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    // Printing Lower part of Diamond Pattern
    // n/2+n/2-1 converts integer n to nearest odd number lower than n
    // this is done because the number of stars in each row is odd
    // i is the number of stars we print in
    // each iteration of loop
    for (i = n / 2 + n / 2 - 1; i >= 1; i = i - 2)
    {
        // printing (n-i)/2 spaces
        for (k = 1; k <= (n - i) / 2; ++k)
        {
            cout<<" ";
        }
        // printing i '*"
        for (k = 1; k <= i; ++k)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}