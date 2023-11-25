#include <stdio.h>
#include <math.h>

int main(){

    int A, B, C;
    
    A=1;
    while(A<501){
        if(A % 2 == 0){
                B=A+1;
                C=A+B+C;
        }
    A=A+1;
    }
    printf("%i", C);
}
