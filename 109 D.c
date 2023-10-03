#include<stdio.h>

    float A,B,C,D,E,F;
    
float main()
{
    printf("digite as 4 notas= ");
    scanf("%f %f %f %f", &A, &B, &C, &D);
    
    F = (A+B+C+D)/4;
    
        if (F >= 5){
        printf("aprovado");
        }
            else{
        
            printf("digite a 5 nota= ");
            scanf("%f", &E);
        
                if(5 <= F+E/2){
                printf("aprovado por exame");
                }
        
                    else{
                
                    printf("reprovado");
}}}