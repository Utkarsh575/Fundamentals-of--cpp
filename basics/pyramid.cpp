#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value of n :- ";
    cin>>n;


    for(int i=0;i<n+1;i++){
        for(int j=1;j<=i;j++){

            cout<<"*";
            if (j==i){
                cout<<endl;
            }
        }
        cout<<endl;

    }



    return 0;

}