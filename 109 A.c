#include<stdio.h>

    int A,B;
    
int main(){
    scanf("%i %i", &A, &B);
    if (B<=A){
        printf("%i ", A-B); 
    }
    if (B>A){
        printf("%i", B-A);
    }
}