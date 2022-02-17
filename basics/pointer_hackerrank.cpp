#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    int z;
    z=*b-*a
    *a = *a + *b;
    
    if (z<0){
        *b=z*(-1)
    }
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}