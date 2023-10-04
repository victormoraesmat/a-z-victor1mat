#include<stdio.h>
float main (){
    
    float A,B,C;
    
    printf("digite a primeira nota: ");
    scanf("%f", &A);
    
    printf("digite a segunda nota: ");
    scanf("%f", &B);
    
    printf("digite a terçeira nota: ");
    scanf("%f", &C);
    
    if((A*2+B*3+C*5)/10 <7){
    printf("reprovado");
    }
    
    else{
        printf("aprovado");
    }
}