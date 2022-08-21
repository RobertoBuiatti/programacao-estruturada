//07) Faça um programa que imprima na tela todos os números entre 0 e 100, porém substitua os múltiplos de 4 pela palavra “plim”. Ex. 0, 1, 2, 3, plim, 5, 6, 7, plim, 9, …
#include <stdio.h>

int main(){
    int i, numero,resto;
   numero = 0;
   for(i=0; i<101; i++){
    numero = i % 4;
    if (numero == 0){
        printf("plim,",i);
    }
    else{
        printf("%d,",i);
    }
    }
}