#include <stdio.h>

float T,A,B,C,N,BR,PA,PB,PC,PN,PBR;

float main(){
    
    printf("digite os votos do canditato 1: ");
    scanf("%f", &A);
    
    printf("digite os votos do canditato 2: ");
    scanf("%f", &B);
    
    printf("digite os votos do canditato 3: ");
    scanf("%f", &C);
    
    printf("digite os votos do canditato 4: ");
    scanf("%f", &N);
    
    printf("digite os votos do canditato 5: ");
    scanf("%f", &BR);
    
    T=A+B+C+N+BR;
    PA=(A/T)*100;
    PB=(B/T)*100;
    PC=(C/T)*100;
    PN=(N/T)*100;
    PBR=(BR/T)*100;
    printf("O total é = %f, canditato 1= %f, canditato 2= %f, canditato 3= %f, canditato 4= %f, canditato 5= %f", T, PA, PB, PC, PN, PBR);
}