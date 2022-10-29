//08) Gerador de bilhetes da mega-sena. Gere 6 números aleatórios entre 1 e 60, sem repetições.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int min,max;
    min = 1, max = 61;
    int num, j, i,jogador,resultado,op_jogador;
    char * par_impar = NULL;
    resultado = 0;
    j = 0;
    for (i = 0; i < 6; i++) {        
        num = min + rand()%(max - min);
        if (num == resultado){
            i--;
        }
        else if (num != resultado){
            resultado = num;
            printf("%d ",resultado);
    }
}
}