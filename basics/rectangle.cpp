#include<iostream>
using namespace std;

int main(){

    int row,coll;
    cout<<"enter the number of rows and collumns"<<endl;
    cin>>row>>coll;

    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=coll;j++){

            cout<<"*";
        }
        cout<<endl;
    }

    



    return 0;
}