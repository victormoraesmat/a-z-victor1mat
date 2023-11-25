#include <stdio.h>

long long A, B;

float main(){
    
    A=15;
    while(A<199){
        
        A=A+1;
        B=A*A;
        printf("%lli ao quadrado= %lli\n",A, B);
    }
}