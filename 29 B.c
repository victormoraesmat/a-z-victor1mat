#include<stdio.h>

float main (){
    
    float A;
    printf("digite um número diferente de zero: ");
    scanf("%f", &A);
    
    if(A<0){
    
    printf("seu número é negativo: ");
    }
    
    else{
        printf("seu número é positivo: ");
    }
}