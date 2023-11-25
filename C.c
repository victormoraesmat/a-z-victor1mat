#include <stdio.h>

long long A, B, C;

float main(){
    
A=1;
    while(A<101){
        B=A+1;
        C=A+B+C;
        printf("%lli+", A);
        A=A+1;
    }
    printf("=%lli", C);
}