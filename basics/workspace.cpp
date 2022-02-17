#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2;
        cin>>x1>>x2;
        
        int a1=0;
        int a2=0;
        //int a1,a2=0,0;

        int time=1;


        //1-10  1-10 

        while(time<100000){

            // int pos1,pos2;
            x1+a1;
            x2+a2;
            
            if(x1+a1==x2+a2){
                cout<<"YES"<<endl;
                break;
            }else if(time==99999){
                cout<<"NO"<<endl;
                break;
            }
            a1++;
            a2+=2;
            time++;
        }

    }
    return 0;
}