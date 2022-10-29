#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int min,max;
    min = 1, max = 10;
    int num,i,jogador,resultado,op_jogador;
    char * par_impar = NULL;

    num = min + rand()%(max - min);
    printf("numero gerado: %d",num);
    

    printf("\n                     ===================\n");
    printf("                     |  1  |  2  |  3  |\n                     |  4  |  5  |  6  |\n                     |  7  |  8  |  9  |\n");
    printf("================================================================\n");
    printf("escolha o numero correspondente ao local que deseja chutar: ");
    scanf("%d",&op_jogador);
    //Se a defesa do goleiro for igual ao chute do jogador, defendeu!!! Se for diferente, gol!!!
    if (op_jogador == num) {
        printf("Defendeu!!!");
    }
    else {
        printf("Goolll!!!");
    }

}