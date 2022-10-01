/*
03) Faça um procedimento que receba um valor inteiro e imprima todos os valores entre zero e o número recebido.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int valor_recebido,i;
    printf("escreva um valor inteiro: ");
    scanf("%d",&valor_recebido);

    for (i=1;i<valor_recebido;i++){
        printf("%d\n",i);
    }
    
}