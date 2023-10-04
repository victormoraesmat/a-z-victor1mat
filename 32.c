#include<stdio.h>
#include<math.h>

float main (){
    
    float A,B,C;
    
    printf("digite o peso: ");
    scanf("%f", &A);
    
    printf("digite a altura: ");
    scanf("%f", &B);
    
    C= A/pow(B,2);

    if(18.5<=C, C<25){
    printf("Normal");
    }
    
    else{
        if(25<=C, C<30){
        printf("sobrepeso");
    }
    
    else{
        if(30<=C, C<35){
        printf("Obesidade grau 1");
    }
    
    else{
        if(35<=C, C<40){
    printf("Obresidade grau 2");
    }
        
    else{
        if(40<=C){
    printf("Busque um médico imediatamente");
    }
    }
    }
    }
    }
}