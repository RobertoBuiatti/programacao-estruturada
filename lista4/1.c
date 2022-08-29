/*01) Faça o jogo de par ou ímpar novamente, porém single player (um jogador). Humano vs computador. 
O computador gera um número aleatório entre 0 e 5 (inclusive), e o jogador escolhe um número entre 0 e 5 (inclusive). 
Exiba todas as informações para verificar quem venceu.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int min,max;
    min = 0, max = 6;
    int num,i,jogador,resultado,op_jogador;
    char * par_impar = NULL;

    num = min + rand()%(max - min);
    printf(" aperte escolher entre par e impar: \n1-par\n2-impar\n");

    scanf("%d",&op_jogador);
    switch(op_jogador){
        case 1:
        par_impar = "par";
        printf("voce escolheu par");
        break;
        case 2:
        par_impar = "impar";
        printf("voce escolheu impar");
        break;
        default:
        printf("escolha invalida");        
        break;

    }
    printf("\nescolha um numero para o jogo de par ou impar entre 0 e 5 : ");
    scanf("%d",&jogador);
    if (jogador <0 || jogador >5){
        printf("o numero tem que ser entre 0 e 5 reinicie o jogo: \n");
    }
    else{
    resultado = jogador + num;
    printf("numero da maquina = %d\n", num);
    printf("resultado = %d\n", resultado);
    
    if (resultado % 2 == 0){
        printf("o resultado e par");
        if (par_impar == "par"){
            printf("\no jogador ganhou");
        }
        else{
            printf("\no jogador perdeu kkkkk");
        }
    }
    else{
        printf("o resultado e impar");
        if (par_impar == "impar"){
            printf("\no jogador ganhou");
    }
        else{
            printf("\no jogador perdeu kkkkk");
        }
    }

   
}
}