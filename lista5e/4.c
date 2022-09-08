/*
04) Faça um procedimento que receba um valor inteiro e imprima cinco números ímpares imediatamente abaixo, e cinco números pares imediatamente acima.
 Exemplo: 17. Imprime: 7 9 11 13 15 17 18 20 22 24 26.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
   

int main(){
    int valor_recebido; 
    int i,j=5,l,x;
    
    printf("escreva um valor inteiro: ");
    scanf ("%d", &valor_recebido);
    
    if (valor_recebido % 2 != 0){
        l=valor_recebido-12;
        for(i=0;i<j;i++){
        l = l + 2;
        printf("%d ",l);
    }
    }
    
    else if (valor_recebido % 2 == 0) {
        l=valor_recebido-10;
        l--;
        for(i=0;i<j;i++){
            l = l + 2;
            printf("%d ",l);
        }
    }
    printf("%d ",valor_recebido);
    l = valor_recebido;
    if (valor_recebido % 2 == 0){
        for(i=0;i<j;i++){
        l = l + 2;
        printf("%d ",l);
    }
    }
    else if (valor_recebido % 2 != 0) {
        l++;
        printf("%d ",l);
        for(i=0;i<j-1;i++){
            l = l+ 2;
            printf("%d ",l);
        }
    }    
}
