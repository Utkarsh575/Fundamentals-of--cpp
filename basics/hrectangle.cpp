#include<iostream>
using namespace std;

int main(){


    int row,coll;
    cout<<"enter the number of rows:- ";
    cin>>row;
    cout<<"enter the number of coll:- ";
    cin>>coll;

    for(int i = 1; i<=row ; i++){
        for(int j = 1 ; j<=coll;j++){
            if (i==1 || i==row || j==1 || j==coll ){
                cout<<"*";

            }
            else{
                cout<<" ";
            }


        }
        cout<<endl;

        
    }



    return 0;
}