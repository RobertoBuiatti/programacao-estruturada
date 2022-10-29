/*02) Faça um jogo de pedra-papel-tesoura, single player, humano vs computador.
 O computador gera um número aleatório entre 0 e 2 (0 para pedra, 1 para papel, 2 para tesoura).
  O jogador escolhe uma das opções. Exiba todas as informações para verificar quem venceu.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int min,max;
    min = 0, max = 3;
    int num,i,jogador,resultado,op_jogador;
    char * par_impar = NULL;
    char * op_maquina = NULL;

    num = min + rand()%(max - min);
    printf(" aperte para escolher entre: \n0-pedra\n1-papel\n2-tesoura\naperte: ");
    scanf("%d",&op_jogador);
    switch(num){
        case 0:
        op_maquina = "pedra";
       
        break;
        case 1:
        op_maquina = "papel";
        
        break;
        case 2:
        op_maquina = "tesoura";
        
        break;
        default:
        printf("escolha invalida");        
        break;

    }
    printf("a maquina escolheu: %s\n",op_maquina);
    switch(op_jogador){
        case 0:
        par_impar = "pedra";
        printf("voce escolheu: pedra\n");
        break;
        case 1:
        par_impar = "papel";
        printf("voce escolheu: papel\n");;
        break;
        case 2:
        par_impar = "tesoura";
        printf("voce escolheu: tesoura\n");
        break;
        default:
        printf("escolha invalida");        
        break;

    }
    if (par_impar == "pedra"){
        if(num == 0){
            printf("a maquina escolheu pedra entao deu empate");
        }
        else if(num == 1){
            printf("a maquina escolheu papel entao voce perdeu kkk");
        }
        else{
            printf("a maquina escolheu tesoura entao voce ganhou");
        }
    }
    else if (par_impar == "papel"){
        if(num == 0){
            printf("a maquina escolheu pedra entao voce ganhou");
        }
        else if(num == 1){
            printf("a maquina escolheu papel entao deu empate");
        }
        else{
            printf("a maquina escolheu tesoura entao voce perdeu kkk");
        }
    }
     else if (par_impar == "tesoura"){
        if(num == 0){
            printf("a maquina escolheu pedra entao voce perdeu kkk");
        }
        else if(num == 1){
            printf("a maquina escolheu papel voce ganhou");
        }
        else{
            printf("a maquina escolheu tesoura entao deu empate");
        }
    }
    //printf("\nescolha um numero para o jogo de par ou impar entre 0 e 5 : ");
    //scanf("%d",&jogador);
    
}

   

