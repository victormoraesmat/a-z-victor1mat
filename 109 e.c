#include<stdio.h>
#include<math.h>

    float A,B,C,D,X,X2;
    
float main(){
    
    printf("digite o A, B e o C da equação= ");
    scanf("%f %f %f",&A, &B, &C);
    
    D = pow(B,2)-(4*A*C);
    
        if(D<0){
        printf("não possui solucoes reais");   
        }
            else{
                if(D>0){
                printf("seu delta é =%f ",D);
                X = (-B+ sqrt(D))/(2*A);
                printf("seu X1 e =%f",X);
                X2 = (-B- sqrt(D))/(2*A);
                printf("seu X2 é =%f",X2);   
                }
}}