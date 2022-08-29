/*03) Faça um jogo de adivinhação. Gere um número aleatório entre 0 e 100. 
O jogador tem cinco chances de acertar o número. A cada tentativa, 
o jogo informa ao jogador se o número que ele tentou é menor ou maior do que o número que foi gerado. 
Quando acertar, informe ao jogador que ele acertou e encerre o jogo. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int min,max;
    min = 0, max = 101;
    int num,i,jogador,resultado,op_jogador;
    char * par_impar = NULL;

    num = min + rand()%(max - min);
    //printf("numero gerado: %d",num);
    
    for(i=0;i<5;i++){
        
        printf(" \naperte para escolherum numero de 0 a 100: ");
        scanf("%d",&op_jogador);
        printf(" %d",op_jogador);

        if (op_jogador > num){
            printf("\no numero que voce tentou foi maior que o numero aleatorio gerado");
            //printf("\naperte para escolherum numero de 0 a 100: ");
            //scanf("%d",&op_jogador);
            
        }
        else if (op_jogador < num){
            printf("\no numero que voce tentou foi menor que o numero aleatorio gerado");
            //printf("\naperte para escolherum numero de 0 a 100: ");
            //scanf("%d",&op_jogador);
        }
        else{
            printf("\nvoce acertou o numero\n");
            printf("o numero aleatorio e: %d",num);
            i = 5;
        }
    }
}