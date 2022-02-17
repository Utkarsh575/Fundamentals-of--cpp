#include<iostream>
using namespace std;

int main(){

int fact , n ;
cout<<"enter the value of n :- ";
cin>>n;
fact=1;
int z=1;

for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){

        fact=fact*j;
        
    }
    cout<<"factorial of "<<i<<" is:- "<<fact<<endl;
    fact=1;
}
    return 0;
}