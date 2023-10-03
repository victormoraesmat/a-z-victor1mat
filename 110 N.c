#include<stdio.h>

float A,B,C;

float main(){
    
    printf("digite 3 números: ");
    scanf("%f %f %f", &A, &B, &C);
    
    if(A+B+C<=100){
        printf("a soma de seus números é: %f", A+B+C);
    }
        else{
            printf("coloque números menores");
        }    
}