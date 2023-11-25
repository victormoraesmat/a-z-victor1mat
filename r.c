#include<stdio.h>

void main(){
    
    int g,n,p;
    
        n=0;
        g=0;
        
        while(n>=0){
            printf(">Digite um número\n");
            scanf("%i", &n);
            
                if(n<0){
                    p=n;
                }
                if(n>g){
                    g=n;
                }
        }
        
        printf(">maior número digitado: ");
        printf(">menor número digitado: ");
}