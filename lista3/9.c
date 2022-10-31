//09) Faça um programa que calcule a soma de todos os números de 1 a 10. Imprima todos os números e a soma total.

#include <stdio.h>

int main(){
    int i, j, numero,resto;
   numero = 0;
   j=0;
   for(i=1; i<11; i++){
    numero = i+numero;
    if(i<10){
    printf("%d+",i);
    }
    else{
        printf("10\n");
    }
    }
     printf("A soma total e: %d \n",numero);
}
