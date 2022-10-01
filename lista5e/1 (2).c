/*01) Faça um jogo onde o computador gera operações matemáticas aleatórias, e o jogador tem que acertar o resultado. 
Pode ser só adição, ou pode adicionar mais operações se você conseguir. 
Os termos da operação são aleatórios. Pode fazer com dois termos, ou com mais termos, se você conseguir. 
Crie um critério para o jogo terminar (errar uma vez, errar três vezes, etc., você escolhe o critério de parada). 
Faça um visual interessante, coloque título, textos informativos, nome do desenvolvedor, etc. Faça um placar com a pontuação do jogador.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    srand(time(NULL));

    int min,max;
    min = -10, max = 10;
    int num,i,num1,num2;
    int erros;
    float soma, resultado;
    

    num = rand() % 101;// tem que definir o resto (%) para o numero inteiro ficar entre 0 e 100

    while (erros <= 3)
    {
        num1 = min + rand()%(max - min); // um numero aleatório entre o minimo e o maximo
        num2 = min + rand()%(max - min); // um numero aleatório entre o minimo e o maximo
        num = rand() % 5;
        switch (num)
        {
        case 1:
            soma = adicao (num1,num2);
            printf("Qual o resultado entre: %d + %d? ",num1,num2);
            scanf ("%f",resultado);
            break;

        case 2:
            soma = subtracao (num1,num2);
            printf("Qual o resultado entre: %d - %d? ",num1,num2);
            scanf ("%f",resultado);
            break;

        case 3:
            soma = multiplicacao (num1,num2);
            printf("Qual o resultado entre: %d * %d? ",num1,num2);
            scanf ("%f",resultado);
            break;
        case 4:
            soma = divisao (num1,num2);
            printf("Qual o resultado entre: %d / %d? ",num1,num2);
            scanf ("%f",resultado);
            break;
        
        default:
            break;
        }
    }
    
    if (soma == resultado){
        printf("voce acertou o resultado!");
    }
    else{
        printf("voce errou. O resultado é %f",resultado);
        erros++;
    }

}