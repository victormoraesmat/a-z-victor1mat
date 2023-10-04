#include<stdio.h>
#include<math.h>

int A,B,C,D;

int main(){

    printf("digite 4 números: ");
    scanf("%i %i %i %i", &A, &B, &C, &D);
    
    printf("os números multiplos de 3 ou 2 são:");
    
    if(A % 2==0 | A % 3==0){
    printf("%i ", A);
    }
    if(B % 2==0 | B % 3==0){
    printf("%i ", B);
    }
    if(C % 2==0 | C % 3==0){
    printf("%i ", C);
    }
    if(D % 2==0 | D % 3==0){
    printf("%i ", D);
    }
}