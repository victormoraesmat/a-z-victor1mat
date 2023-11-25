#include <stdio.h>
#include <math.h>

int l;
float main(){
    
    l=1;
    while(l<11){
        if(l % 2 > 0){
            printf("%f\n", pow(l,l));
        }
    l=l+1;
}
}
