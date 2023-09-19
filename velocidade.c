#include <stdio.h>

float V,DM,TS,T,D;

float main(){
    printf("gigite: distancia =");
    scanf("%f", &D);

    printf("digite: tempo =");
    scanf("%f", &T);

   DM = D/1000;
   TS = T/60;
   V = DM/TS;

    printf("velocidade= %f", V);
}
