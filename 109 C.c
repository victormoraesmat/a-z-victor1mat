#include<stdio.h>

    float A, B, C, D, E;
    
float main()
{
    printf("digite as 5 notas= ");
    scanf("%f %f %f %f", &A, &B, &C, &D);
    E = (A+B+C+D)/4;
    if (E >= 5){
        printf("aprovado");
    }
    else{
        printf("reprovado");
    }
}