#include<stdio.h>
#include<math.h>

int A;

int main(){
    
    printf("digite seu número: ");
    scanf("%i", &A);
    
    if(A % 2 ==0){
        
    printf("seu número é par");
    
    }
    
    else{
        
        printf("seu número é impar");
    }
}