//11) Faça um programa que imprima o nome de duas equipes e receba a quantidade de vitórias, 
//empates e derrotas de cada equipe. Cada vitória valem 3 pontos, cada empate vale 1 ponto,
//derrota não vale ponto. Imprimir o nome de cada equipe (a sua escolha), o número de vitórias,
//empates e derrotas, e a pontuação total.

#include <stdio.h>

int main(){
    int equipe1;
    int vitoria1;
    int empate1;
    int derrota1;
    int equipe2;
    int vitoria2;
    int empate2;
    int derrota2;
    int resultado1;
    int resultado2;

    printf("escreva o numero de vitorias empates e derrotas de cada equipe\n");
    printf("equipe 1: \n");
    printf("numero vitorias da equipe 1: "); scanf("%d",&vitoria1);
    printf("numero empates da equipe 1: "); scanf("%d",&empate1);
    printf("numero derrotas da equipe 1: "); scanf("%d",&derrota1);
    printf("equipe 2: \n");
    printf("numero vitorias da equipe 2: "); scanf("%d",&vitoria2);
    printf("numero empates da equipe 2: "); scanf("%d",&empate2);
    printf("numero derrotas da equipe 2: "); scanf("%d",&derrota2);
    resultado1 = (vitoria1*3)+(empate1);
    resultado2 = (vitoria2*3)+(empate2);
    printf("\nPontos finais equipe 1: %d\n",resultado1);
    printf(" numero vitorias da equipe 1: %d\n numero empates da equipe 1: %d\n numero derrotas da equipe 1: %d\n",vitoria1,empate1,derrota1);
    printf("Pontos finais equipe 2: %d\n",resultado2);
    printf(" numero vitorias da equipe 2: %d\n numero empates da equipe 2: %d\n numero derrotas da equipe 2: %d\n",vitoria2,empate2,derrota2);

    return 0;
}