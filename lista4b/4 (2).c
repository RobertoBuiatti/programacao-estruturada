/*04) Escreva um programa em C para fazer um padrão como triângulo de ângulo reto com número aumentado de 1 em 1. 
 usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:

1
2 3
4 5 6
7 8 9 10

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int entrada, qnt_asterisco, l, i,j;
    qnt_asterisco = 0;
    printf("Escolha a altura do triangulo: ");
    scanf("%d", &entrada);
    j=0;
    for (i = 0; i < entrada; i++) {
        qnt_asterisco = qnt_asterisco + 1;

        for (l=0; l<qnt_asterisco; l++){
            j++;
            printf("%d ",j);
            
        }
        printf("\n");
    }
}