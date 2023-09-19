#include <stdio.h>
#include <math.h>

float A,B,C,D;

float main(){
    printf("escreva A: ");
    scanf("%f", A);

    printf("escreva B: ");
    scanf("%f", B);

    printf("escreva C: ");
    scanf("%f", C);

    D = A+B+C;

    printf("seu D é %f", pow(D,2));
}
