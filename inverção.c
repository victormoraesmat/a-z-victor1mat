#include <stdio.h>

float A,B,C;

float main(){
    printf("gigite: A =");
    scanf("%f", &A);
    
    printf("digite: B =");
    scanf("%f", &B);
    
        C = A;
        A = B;
        B = C;
    
        printf("A =%f, B =%f", A,B);
}