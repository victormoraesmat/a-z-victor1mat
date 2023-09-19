#include <stdio.h>
#include <math.h>

float T,V,D,L;

float main(){
    printf("gigite: tempo em h =");
    scanf("%f", &T);
    
    printf("digite: velocidade em km/h =");
    scanf("%f", &V);
    
    D = V*pow(T,2);
    L = D/12;
    
    printf("tempo =""%f", T);
    printf(", velocidade =""%f", V);
    printf(", distancia =""%f", D);
    printf(", litros usados =""%f", L);
}
