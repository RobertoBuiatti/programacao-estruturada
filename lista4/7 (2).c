//07) Faça um código para gerar 3 números aleatórios entre 100 e 999 e que sejam divisíveis por 5.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int min,max;
    min = 100, max = 1000;
    int num, j, i,jogador,resultado,op_jogador;
    char * par_impar = NULL;
    resultado = 1;
    j = 0;
    for (i = 0; i < 3; i++) {        
        num = min + rand()%(max - min);
        if (num % 5 == 0){
            printf("%d ",num);
        }
        else if (num % 5 != 0){
            i--;
    }
}
}