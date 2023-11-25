#include <stdio.h>

long long A, B;

float main(){
    
    printf("digite um número: ");
    scanf("%lli", &B);
    A=0;
    while(A<11){
        printf("%lliX%lli= %lli\n",B , A, A*B);
        A=A+1;
    }
}