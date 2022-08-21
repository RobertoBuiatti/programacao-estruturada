#include <stdio.h>

int main(){
    /*02) Faça um código que imprima seu nome na tela 10 vezes.
     Primeiro uma vez em cada linha, depois sem quebra de linhas e com separação por vírgulas.*/

    char nome [40];
    printf("escreva seu nome: ");
    gets (nome);
    int i;
    for(i=0; i <= 9;i++) {
        printf("%d - %s\n",i+1, nome);
    }
    for(i=0; i <= 9;i++) {
        printf("%d - %s,",i+1, nome);
    }
}