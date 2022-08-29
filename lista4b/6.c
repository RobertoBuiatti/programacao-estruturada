/* 06) Escreva um programa em C para fazer um padrão como uma pirâmide com um asterisco. 
O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:

   *
  * *
 * * *
* * * *

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int entrada, qnt_asterisco, l=1, i,j,k;
    qnt_asterisco = 0;
    printf("Escolha a altura do triangulo: ");
    scanf("%d", &entrada);
    qnt_asterisco = entrada;
    for (i = 0; i <= entrada; i++) { 
        for (j=0; j < qnt_asterisco; j++){
            printf(" ");
        }
        for (j=0; j < i; j++){
            printf("* ");
            l++;
        }
        qnt_asterisco--;
        printf("\n");
    }
}