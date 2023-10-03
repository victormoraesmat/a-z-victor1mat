#include<stdio.h>

float A;

float main(){
    
    printf("escreva a nota: ");
    scanf("%f", &A);
    
    if(9<A){
        
        printf("nota A");
    }
    
    else{
        
       if(A>7 & A<=9){
           
           printf("nota B");
       }
     
        else{
        
            if(A>5& A<=7){
        
            printf("nota C");
            }
            
            else{
        
                if(3.5<A & A<=5){
        
                printf("nota D");
                }
                
                    else{
        
                    if(0<A & A<=3.5){
        
                    printf("nota E");
                    }
    }
    }
    }
    }
}