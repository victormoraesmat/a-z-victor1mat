#include<stdio.h>

float A,B,C,D,E,F,G;
float main(){
    
    printf("digite 5 números: ");
    scanf("%f %f %f %f %f", &A, &B, &C, &D, &E);
    F = A;
    G= A;
    if(B>F){
    F= B;
    }
    else if (B<G){
        G=B;
    }
    if(C>F){
        F=C;
    }
    else if (C<G){
        G=C;
    }
    if(D>F){
        F=D;
    }
    else if (D<G){
        G= D;
    }
    if(E>F){
        F=E;
    }
    else if (E<G){
        G=E;
    }
    printf("O maior número é: %f, e o menor é: %f", F, G);
}