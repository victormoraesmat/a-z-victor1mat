#include<stdio.h>
#include<math.h>

float A;
float main(){
    printf("digite um valor: ");
    scanf("%f",&A);
    
        if (A<=3){
        printf("Seu número não é maior que 3, %f", A);
        }
        else{
            printf("seu número é maior que 3, digite um número menor ou igual a 3");
        }
}