/*10) Faça um programa que gere dois números inteiros aleatórios entre 0 e 99 (inclusive). 
O usuário deve digitar a soma desses números. 
O programa deve informar se o resultado digitado pelo usuário está correto ou incorreto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int min,max;
    min = 0, max = 100;
    int num, j, i,jogador,resultado,op_jogador;
    char * par_impar = NULL;
    resultado = 0;
    j = 0;
    num = min + rand()%(max - min);
    //printf("numero1: %d\n",num);
    jogador = min + rand()%(max - min);
    //printf("numero2: %d\n",jogador);
    resultado = num + jogador;
    //printf("resultado: %d\n",resultado);
    printf("qual o resultado da soma dos dois numeros aleatorios? ");
    scanf("%d",&op_jogador);

    if (op_jogador == resultado){
        printf("\no resultado digitado esta certo");
    }    
    else {
        printf("\no resultado digitado esta errado, o resultado da soma de %d + %d = %d",num,jogador,resultado);
    }
}