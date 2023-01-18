#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int size ){

    int res = arr[0];
  for(int i=1;i<size;i++)
    {
res = res ^ arr[i];
    }
    return res;


}

int main(){

int arr[]={1,1,2,2,3,5,5};
int size = sizeof(arr)/sizeof(arr[0]);
cout<<findUnique(arr,size);
    return 0;
}