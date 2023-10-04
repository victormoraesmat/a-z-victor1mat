#include<stdio.h>

    int A,B,C;
    float main(){
        
        printf("digite o primeiro número: ");
        scanf("%i", &A);
        
        printf("digite o segundo número número: ");
        scanf("%i", &B);
        
        printf("digite o tipo de conta que quer fazer, sendo: \n 1 para soma\n 2 para subtreção\n 3 para multiplicção \n 4 para divisão \n");
        scanf("%i", &C);
        
        switch (C){
        
        case 1:
        printf(" você escolhe soma, a soma de seus números é =%i", A+B);
        break;
        
        case 2:
        printf(" você escolhe subtração, a subtração de seus números é =%i", A-B);
        break;
        
        case 3:
        printf(" você escolhe multiplicação, a multiplicação de seus números é =%i", A*B);
        break;
        
        case 4:
        printf(" você escolhe divisão, a divisão de seus números é =%i", A/B);
        break;
    }}        