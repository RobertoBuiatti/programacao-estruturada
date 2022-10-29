#include <stdio.h>

int main(){
    /*
    03) Faça um programa que imprima todos os números pares entre 0 e 100 em ordem crescente.
    */
   int i, numero,resto;
   numero = 0;
   for(i=0; i<101; i++){
    numero = i % 2 ;
    if (numero == 0){
        printf("O numero %d e par\n",i);
    }
    else{
        //printf("O numero %d e impar\n",i);
    }
    }
}