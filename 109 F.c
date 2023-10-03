#include<stdio.h>

float A,B,C;

float main(){

    printf("escreva 3 números: ");
    scanf("%f%f%f", &A, &B, &C);
    
    if(A<B){
        
        if(B<C){
        printf("Seus números em ordem crecente é %f %f %f", A,B,C);
        }
            else{
                if(A<C){
                printf("Seus números em ordem crecente é %f %f %f", A,C,B);    
                }
                    else{
                        printf("Seus números em ordem crecente é %f %f %f", C,A,B);
                    }
            }
    }
        else{
            if(A<C){
            printf("Seus números em ordem crecente é %f %f %f", B,A,C);
            }
                else{
                    if(B<C){
                    printf("Seus números em ordem crecente é %f %f %f", B,C,A);
                    }
                        else{
                        printf("Seus números em ordem crecente é %f %f %f", C,B,A);
                        }
                }
        }
}
