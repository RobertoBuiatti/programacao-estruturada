/*07) Crie um jogo que mostre um número binário para o usuário, e este tem que acertar o número decimal correspondente.
 Similar ao exercício 9 da lista 4. Este número binário tem que estar em um vetor de 4 posições. O jogo termina quando o jogador errar três vezes. 
 Mostrar quantas vezes o jogador acertou e errou.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



float adicao (float x1, float x2){
    float resultado = x1+x2;
    return resultado;
}

float subtracao (float x1,float x2){
    float resultado = x1-x2;
    return resultado;
}

float multiplicacao (float x1, float x2){
    float resultado = x1*x2;
    return resultado;
}

float divisao (float x1, float x2){
    float resultado = x1/x1;
    return resultado;
}


int main(){
    int i, j=0,h,l=0, n,k=0,num,num1,num2,erros;
    int max = 2, min = 0;
    int vetor [4];
    int p[4];
    int soma, resultado;
    srand(time(NULL));

    for (i=0 ; i<4;i++){
        n = min + rand()%(max - min);
        vetor[i] = n;
       
}
for (i=3;i>=0;i--){
    k = k + (vetor[i]*pow(2,i));
        printf("%d ", vetor[i]);        
}

printf("\n");
printf("Qual o resultado da conversao deste binario a cima? \n");
while (erros <= 3)
    {
       
        scanf ("%d",&resultado);
        if (resultado == k){
            printf("Voce acertou!\n");
            erros=4;
        }
        else{
            printf("Voce errou!\n");
            erros++;
        }
    }

        printf("Rsultado: %d ", k);
        
return 0;
}