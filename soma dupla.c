#include <stdio.h>

float A,B,C,D;

int main(){

    printf("digite o primeiro numero: ");
    scanf("%f", &A);

    printf("digite o segundo numero: ");
    scanf("%f", &B);

    printf("digite o terceiro numero: ");
    scanf("%f", &C);

    printf("digite o quarto numero: ");
    scanf("%f", &D);

    printf("a soma dos seus 2 primeiros numeros = %f, e dos dois segundos numeros =%f", A+B, C+D);
}
