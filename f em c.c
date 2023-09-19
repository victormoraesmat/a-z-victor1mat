#include <stdio.h>

float F;        // F= Fahrenheit
float C;        // C= celsius

float main(){
    printf("escreva Fahrenheit =");
    scanf("%f", &F);
    C = (F-32)*5/9;
    printf( "converção de Fahrenheit em celsius =""%f", C);
}
