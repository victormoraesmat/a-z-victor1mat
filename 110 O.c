#include<stdio.h>

int A;

int main(){
    
    printf("digite um valor: ");
    scanf("%i", &A);
    
    if(30<A*2){
        printf("o dobro de seu numero é: %i", A*2);
    }
        else{
            printf("digite um número diferente");
        }    
}