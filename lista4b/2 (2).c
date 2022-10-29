/*02) Escreva um programa em C para exibir o padrão como um triângulo de ângulo reto com um número. 
O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int entrada, qnt_asterisco, l, i,j;
    qnt_asterisco = 0;
    printf("Escolha a altura do triangulo: ");
    scanf("%d", &entrada);
    j= 0;
    for (i = 0; i < entrada; i++) {
        qnt_asterisco = qnt_asterisco + 1;

        for (l=0; l<qnt_asterisco; l++){
            j++;
            printf("%d ",j);
            
        }
        j = 0;
        printf("\n");
    }
}