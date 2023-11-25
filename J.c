#include <stdio.h>

float F, C, D;
float main(){
    C=10;
    while(C<101){
    F=(C*1.8)+32;
    printf("%f\n", F);
    C=C+10;
    }
}
