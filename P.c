#include <stdio.h>
#include <math.h>

float n, l, t;
float main(){
    
    l=50;
    t=0;
    while(l<71){
    t=t+l;
    l=l+1;
    }
    n=t/20;
    printf("soma=%f, media=%f\n", t, n);
}
