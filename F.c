#include <stdio.h>
#include <math.h>

int main(){

    int A;
    
    A=0;
    while(A<200){
        if(A % 4 == 0){
            printf("%i\n", A);    
        }
    A=A+1;
    }
}
