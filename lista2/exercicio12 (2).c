//12) Faça um programa que receba a quantidade de vitórias, recebe a quantidade de derrotas, recebe a quantidade de empates.
// Exibe na tela o nome da equipe (a sua escolha), a quantidade de vitórias, derrotas e empates, e os respectivos percentuais.
// Ex.: 8 vitórias - 53%, 5 derrotas - 33%, 2 empates - 13%.

#include <stdio.h>

int main(){
    int equipe1;
    int vitoria1;
    int empate1;
    int derrota1;
    float resultado1;
    float resultado2;
    float resultado3;
    float resultado4;

    printf("escreva o numero de vitorias empates e derrotas da equipe\n");
    printf("equipe: \n");
    printf("numero vitorias da equipe: "); scanf("%d",&vitoria1);
    printf("numero empates da equipe: "); scanf("%d",&empate1);
    printf("numero derrotas da equipe: "); scanf("%d",&derrota1);
    resultado1 = (vitoria1)+(empate1)+(derrota1);
    resultado2 = ((vitoria1*100)/resultado1);
    resultado3 = ((empate1*100)/resultado1);
    resultado4 = ((derrota1*100)/resultado1);
    
    printf("\nPontos finais equipe: %f\n",resultado2);
    printf(" numero vitorias da equipe: %d -- %.2f%%\n numero empates da equipe: %d -- %.2f%%\n numero derrotas da equipe: %d -- %.2f%%\n",vitoria1,resultado2,empate1,resultado3,derrota1,resultado4);
 
    return 0;
}