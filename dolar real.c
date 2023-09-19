#include <stdio.h>

float D,R,C;

float main(){
    
    printf("digite o valor do real: ");
    scanf("%f", &R);
    
    printf("digite o valor do dolar: ");
    scanf("%f", &D);
    
    C = D/R;

    printf("o valor é = %f", C);
}