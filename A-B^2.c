#include <stdio.h>
#include <math.h>

float A,B,C;

float main(){
    
    printf("gigite: A = ");
    scanf("%f", &A);
    
    printf("gigite: B = ");
    scanf("%f", &B);
    
    C = pow(A-B,2);
    
        printf("valor final =%f", C);
}