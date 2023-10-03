#include<stdio.h>

    float A,B,C,D;
    float main(){
        
        printf("digite o valor dos quatro lados: ");
        scanf("%f",&A);
        scanf("%f",&B);
        scanf("%f",&C);
        scanf("%f",&D);
        
        if(A<= 0 | B<=0 | C<=0 | D<=0){
           
            printf("por favor digite apenas números não nulos");
        }

        else {

            if(A==B & A==C & A==D & B==C & B==D & C==D){
            printf("sua figura geometrica é um quadrado");
            }
            
                else{
                    
                    if (A==B & C==D | B==C & A==D | B==D & A==C){
                    printf("sua figura geometrica é um retangulo");
                    }
                        
                        else{
                        
                            printf("sua forma geometrica é um trapezio");
}}}}