//06) Faça um código que gere 10 números aleatórios entre 0 e 100. Imprima em uma única linha, com os números separados por espaços.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int min,max;
    min = 0, max = 101;
    int num,i,jogador,resultado,op_jogador;
    char * par_impar = NULL;

   
    for(i = 0; i < 10;i++){  
        num = min + rand()%(max - min);  
        printf(" %d",num);
    }
}