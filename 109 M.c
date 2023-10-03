#include<stdio.h>
#include<math.h>

char A, B;
void main(){
    printf("digite o seu genero sendo: M para mascolino e F para feminino ");
    scanf("%c",&A);
    
    printf("digite o seu nome: ");
    scanf("%c",&B);
    
        if (A=M|F){
            if(A=M){
                printf("lima.sr.%c", B);
            }
            else{
                printf("lima.sra.%c", B);
            }
        }
        else{
            printf("genero desconhecido");
        }
}