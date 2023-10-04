#include<stdio.h>

float A;

float main(){
    
    printf("escreva um número: ");
    scanf("%f", &A);
    
    if(A<3){
        
        printf("seu número é menor que 3");
    }
    
    else{
        
        if(A>3){
        
        printf("seu número é maior que 3");
        
        }
        else{
            
            if(A=3){
        
        printf("seu número é 3");
        }
    }
    }
}