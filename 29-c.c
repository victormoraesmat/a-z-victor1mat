#include<stdio.h>

float main (){
    
    float A,B;
    printf("digite um número: ");
    scanf("%f", &A);
    
    printf("digite um segundo número: ");
    scanf("%f", &B);
    
    if(A-B<0){
    
    printf("seu número é menor que zero: ");
    }
    
    else{
        printf("seu número é maior ou igual a zero: ");
    }
}