#include <stdio.h>

float C, T, t, A;
float main(){
    C=1;
    A=0;
    t=1;
    while(C<65){
    A=t;
    t=t*2;
    T=t+A;
    C=C+1;
    }
    printf("%f\n", T);
}
