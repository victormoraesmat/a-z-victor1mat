#include <stdio.h>

float A,B,C,D,E,F;

float main(){
    
    printf("digite valor 1: ");
    scanf("%f", &A);
    
    printf("digite valor 2: ");
    scanf("%f", &B);
    
    C=A+B;
    D=A-B;
    E=A*B;
    F=A/B;
    
    printf("os resultados são: multiplicação= %f, soma= %f, subtração= %f, divisão= %f", E,C,D,F);
}