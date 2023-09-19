#include <stdio.h>

float P,X,V,T;

int main(){
    
    printf("digite o valor: ");
    scanf("%f", &V);
    
    printf("digite a taxa: ");
    scanf("%f", &X);
    
    printf("digite o tempo: ");
    scanf("%f", &T);
    
    P = V+(V*(X/100)*T);

    printf("a sua prestação é = %f", P);
}