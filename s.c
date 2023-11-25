#include<stdio.h>

void main(){
    
    int d,di,r;
        
        printf(">Digite o divisor\n");
        scanf("%i", &di);
        
        printf(">Digite um dividendo\n");
        scanf("%i", &d);
        
        
        while(d<di&&d>0){
            
            d=d-di;
            r=d;
            
        }
    
    printf("%i dividido por %i = %i", d, di, r);
}