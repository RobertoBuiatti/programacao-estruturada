//06) Faça um programa que imprima  todos os números múltiplos de 4 entre 100 e 300 em ordem decrescente.

#include <stdio.h>

int main(){
    int i, numero,resto;
   numero = 0;
   for(i=300; i>99; i--){
    numero = i % 4;
    if (numero == 0){
        printf("O numero %d e multiplo de 4\n",i);
    }
    else{
        //printf("O numero %d e impar\n",i);
    }
    }
}