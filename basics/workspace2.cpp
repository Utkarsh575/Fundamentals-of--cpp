#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x , y;
        cin>>x>>y;

        if(x==y){
            cout<<"YES"<<endl;
        }
        else if(x+1==y+2){
            cout<<"YES"<<endl;
        }
        else if(x+1>y+2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}