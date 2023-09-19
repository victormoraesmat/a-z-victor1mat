#include <stdio.h>
#include <math.h>

float V,R;

float main(){
    
    printf("digite o raio= ");
    scanf("%f", &R);
    
   V=(4/3)*3.1415*pow(R,3);
    
    printf("o volume é = %f", V);
}