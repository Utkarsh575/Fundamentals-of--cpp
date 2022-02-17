#include<bits/stdc++.h>
int main() {
    int T;
    std::cin>>T;
    while (T--){


    int X, Y, A, B, K;
    std::cin>>X>>Y>>A>>B>>K;

    for(int i=1; i<=K; i++){
        X+=A;
        Y+=B;
    }
    if (X>Y){
        std::cout<<"PETROL"<<std::endl;
    }else if(X==Y){
        std::cout<<"SAME PRICE"<<std::endl;
    }else{
        std::cout<<"DIESEL"<<std::endl;
    }
    }
    return 0;
}