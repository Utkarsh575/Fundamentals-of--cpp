#include<iostream>
using namespace std;

int main(){

    float n1,n2;

    cout<<"INPUT 2 INTERGERS :- "<<endl;
    cin>>n1>>n2;


    char op;
    cout<<"ENTER A MATHEMATICAL OPERATOR + , - , * , /"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1 / n2<<endl;
        break;
    
    default:
        cout<<"ENTER A VALID OPERATOR"<<endl;

        break;
    }


    return 0;
}