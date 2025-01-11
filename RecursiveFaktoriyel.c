#include <stdio.h>

int faktoriyel(int x){
    if(x==0) return 0;
    else if(x==1) return 1;
    return faktoriyel(x-1) * x ;
}

int main() {
    // Write C code here
    int x = faktoriyel(3);
    printf("faktoriyel sonuc: %d",x);
    return 0;
}
