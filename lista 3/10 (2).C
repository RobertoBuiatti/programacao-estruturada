//10) Faça um programa que calcule a soma de todos os números pares entre 0 e 100. Imprima os números e a soma total.
#include <stdio.h>

int main(){
    int i, j, numero,resto;
   numero = 0;
   resto = 0;
   j=0;
   for(i=0; i<101; i++){
    numero = i % 2;
    if(numero==0){
        resto = i+resto;

    }
    
    else if(i<100){
    printf("%d+",i-1);
    }
    
    else{
        printf("100\n");
    }
    }
     printf("\nA soma total e: %d \n",resto);
}