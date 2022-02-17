// a= 1 , b =6 , c = 3  x=−0.55051
// x =−5.44949

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    
    long double q1, q2 , a ,b ,c ,d ;
    cin>>a>>b>>c;
    d= ((pow(b,2))-4*a*c);
    
    if (d>=0){

        q1= (-b + sqrt(d))/2*a;
        q2= (-b - sqrt(d))/2*a;
        cout<<q1<<endl;
        cout<<q2<<endl;
    }   
    else{
        cout<<"imaginary roots";
    }
    return 0;
}