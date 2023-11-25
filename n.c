#include <stdio.h>

int n, l;
float m;
long long t;
float main(){
    
    l=0;
    t=0;
    printf("digite 10 números:");
    while(l<10){
    scanf("%i", &n);
    l=l+1;
    t=t+n;
    }
    m=t/10;
    printf("total=%lli\nmédia=%f", t, m);
}
