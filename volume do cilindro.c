#include <stdio.h>
#include <math.h>

float R,V,A;
float main(){
    printf("raio do cilindro =");
    scanf("%f", &R);
    
    printf("altura do cilindro =");
    scanf("%f", &A);
    V = 3.14*pow(R,2)*A;
    printf("volume =" "%F",V);
}
