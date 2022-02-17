#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n = "<<endl;
    cin>>n;

    int temp=1;
    for(int i=0; i<n+1 ;i++){
        for(int j=1; j<i+1 ;j++){
           temp*=2;
        }
        cout<<i<<" = "<<temp<<endl;
        temp=1;
    }
    return 0;

}