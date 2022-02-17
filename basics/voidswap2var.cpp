#include<bits/stdc++.h>
using namespace std;

//swaping two numbers using a fuction and two variables

void swap(int,int);

int main(){
    int a=5;
    int b=10;

    cout<<"a = "<<a<<" b = "<<b<<endl; 
    swap(a,b);

    return 0;
}
void swap (int x ,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"a = "<<x<<" b = "<<y<<endl;


}