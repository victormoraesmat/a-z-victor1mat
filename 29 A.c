#include <stdio.h>
#include <math.h>

int A;

int main(){

    printf("digite sua idade em anos = ");
    scanf("%i", &A);
    
    if (A<18)
    {
        printf("menor de idade");
    }
    else
    {
        printf("maior de idade");
    }    
}
