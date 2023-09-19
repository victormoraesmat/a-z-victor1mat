#include <stdio.h>

float S,P,N;

float main(){
    
    printf("digite o slario: ");
    scanf("%f", &S);
    
    printf("digite o reajuste em porcentagem: ");
    scanf("%f", &P);
    
    N = S+(P/100)

    printf("os novo slario é = %f", N);
}