#include <stdio.h>
#include <math.h>

float A,B,C;

float main(){

    printf("digite A = ");
    scanf("%f", &A);
    
    printf("digite B = ");
    scanf("%f", &B);
    
    C= A*B;
    
    printf("seu A*B^2 é = %f", pow(C,2));
}
