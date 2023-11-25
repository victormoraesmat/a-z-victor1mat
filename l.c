#include <stdio.h>
#include <math.h>

int n, l;
long long t;
int main(){
    
    l=0;
    t=0;
    while(l<15){
    printf("digite um número:");
    scanf("%i", &n);
    l=l+1;
    if(n<0){
        n=n*-1;
    }
    else if(n==0){
        n=1;
    }
    else{
    n=pow(n,n);
    }
    t=t+n;
    }
    printf("%lli\n", t);
}
