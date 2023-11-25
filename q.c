#include <stdio.h>
#include <math.h>

float n, l, t, r;
char p;
void main(){
    t=0;
    p='s';
    
    while(p=='s'){
        
            n=0;
            l=0;
            r=0;
    
        printf("digite quantos comodos tem o local:\n");
        scanf("%f", &l);
        
        if(l>n){
        printf("digite o tamanho dos locais em metros quadrados:\n");
        
            while(r<l){
            scanf("%f", &n);
            r=r+1;
            t=t+n;
            }
        }
        
        printf("quer adicionar mais comodos? (digite s para sim e n para não):\n");
        scanf("%c", &p);
        
        if(p=='s'||p=='n'||p=='N'){}
        else{
        switch(p){
            case('s'):
            break;
            
            case('S'):
            p='s';
            break;
            
            case('n'):
            break;
            
            case('N'):
            break;
            
            default:
            printf("letra invalida digite outra letra\n");
            scanf("%c", &p);
        }
        }
        }
        printf("total=%f", t);
}
