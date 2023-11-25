#include <stdio.h>
#include <math.h>

float main(){

    long long A, B, C;
    
    B=0;
    A=1;
    while(A<9999999999){
        A=B+A;
        B=A;
        printf("%lli\n", A);
    }
}
