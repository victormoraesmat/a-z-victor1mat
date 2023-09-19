#include <stdio.h>

float A,B,C,D;

float main(){
    printf("gigite: A =");
    scanf("%f", &A);
    
    printf("digite: B =");
    scanf("%f", &B);
    
    printf("digite: C =");
    scanf("%f", &C);
    
    printf("digite: D =");
    scanf("%f", &D);
   
        printf("resultados:A+B =%f, A.B =%f, A+C =%f, A.C =%f, A+D =%f, A.D =%f, B+C =%f, B.C =%f, B+D =%f, B.D =%f, C+D =%f, C.D =%f ", A+B, A*B, A+C, A*C, A+D, A*D, B+C, B*C, B+D, B*D, C+D, C*D);

}
