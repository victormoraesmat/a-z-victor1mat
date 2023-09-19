#include <stdio.h>

float V,C,L,A;

int main(){
    
    printf("digite o comprimento: ");
    scanf("%f", &C);
    
    printf("digite a largura: ");
    scanf("%f", &L);
    
    printf("digite a altura: ");
    scanf("%f", &A);
    
    V = C*L*A;

    printf("a sua prestação é = %f", V);
}