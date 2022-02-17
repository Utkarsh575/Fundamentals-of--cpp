#include<iostream>
using namespace std;

int main() {


    int savings;

    cout<<"HOW MUCH SAVING DO YOU HAVE "<<endl;
    cin>>savings;

    if(savings>5000) {
        if(savings>10000){
            cout<<"Roadtrip with neha\n";

        } else {
            cout<<"Shopping with neha\n";
        }

        

    } else if(savings>2000){

        cout<<"RESHMA\n";
    

    } else{
        cout<<"Friends\n";
    }
    
    return 0;
}