#include <stdio.h>
#include <math.h>

float main(){

    int A, B, C, D;
    
    printf("    Escreva uma base: ");
    scanf("%i", &B);
    printf("    Escreva um expoente: ");
    scanf("%i", &A);
    
    C=B;
    D=A;
    while(A>1){
        B=B*C;
        A=A-1;
    }
    if(D==0){
        printf("    1");
    }
    else{
    printf("    %i", B);
    }
}
