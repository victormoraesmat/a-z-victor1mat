#include<stdio.h>
#include<math.h>

float A,B;

float main(){
    
    printf("digite valor total da compra: ");
    scanf("%f", &A);
    
    printf("digite valor entrege pelo cliente: ");
    scanf("%f", &B);
    
    if(A>B){
        
        printf("valor insuficiente, valor total da compra = %f", A);
    }
    
    else{
    if(A/B == 1){
        
    printf("sem troco, valor total da compra = %f", A);
    
    }
    
    else{
        
        printf("troco de %f, valor total da compra = %f", B-A, A);
    }
}}