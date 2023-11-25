#include <stdio.h>
#include <math.h>

float n, l, t;
int main(){
    
    l=0;
    t=0;
    while(l<10){
    printf("digite um número:");
    scanf("%f", &n);
    l=l+1;
    if(n<0){
        n=n*-1;
    }
    else if(n==0){
        n=1;
    }
    t=t+n;
    }
    printf("%f\n", t);
}
