#include <stdio.h>

float C;
float F;

float main(){
    printf("escreva Celsius =");
    scanf("%f", &C);
    F = (9*C+160)/5;
    printf( "converção de celsius em fahenheit =""%f",F);
}
