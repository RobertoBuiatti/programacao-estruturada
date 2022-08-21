//10) Faça um programa que calcule a soma de todos os números pares entre 0 e 100. Imprima os números e a soma total.
#include <stdio.h>

int main(){
    int i, j, numero,resto;
   numero = 0;
   resto = 0;
   j=0;
   for(i=0; i<101; i++){
    if(numero = i % 2){
        resto = i+resto;

    }
    
    else if(i<100){
    printf("%d+",i);
    }
    else{
        printf("100\n");
    }
    }
     printf("A soma total e: %d \n",resto);
}