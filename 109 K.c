#include<stdio.h>
#include<math.h>

float A;
float main(){
    printf("digite um valor: ");
    scanf("%f",&A);
    
        if (1<=A & A<=9){
        printf("esta na faixa permitida");
        }
            else
            {
            printf("nao esta na faixa permitida");
            }
}