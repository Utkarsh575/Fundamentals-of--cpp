#include <iostream>
using namespace std;
main(){

int a=3;
int * b = &a;
// & address of operator
// * = dereference operator

int **c=&b; //pointer to pointer
cout<<b<<endl;
cout<<c<<endl;

    return 0;
}