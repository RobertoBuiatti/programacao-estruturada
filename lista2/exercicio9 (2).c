/* 09) Fazer um programa que receba um número inteiro, e verifique se ele está entre 100 e 200.
 Se estiver dentro desta faixa, imprima “Você digitou um número entre 100 e 200”, 
 senão imprima “Você digitou um número fora da faixa”.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("escreva um numero entre 100 e 200: ");
    scanf("%d", &numero);
    if ((numero >= 100) && (numero <= 200)){
        printf("Voce digitou um numero entre 100 e 200");
        }
    else{
        printf("Voce digitou um numero fora da faixa entre 100 e 200");
    }

    
    return 0;
    
}