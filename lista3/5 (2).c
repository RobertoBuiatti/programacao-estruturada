//05) Faça um programa que imprima todos os números múltiplos de 3 entre 100 e 200 em ordem crescente.
#include <stdio.h>

int main(){
    int i, numero,resto;
   numero = 0;
   for(i=100; i<201; i++){
    numero = i % 3 ;
    if (numero == 0){
        printf("O numero %d e multiplo de 3\n",i);
    }
    else{
        //printf("O numero %d e impar\n",i);
    }
    }
}