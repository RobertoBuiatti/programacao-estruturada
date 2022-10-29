/*01) Escreva um programa em C para exibir o padrão como triângulo de ângulo reto usando um asterisco. 
O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:

*
**
***
****

*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int entrada, qnt_asterisco, l, i;
    qnt_asterisco = 0;
    printf("Escolha a altura do triangulo: ");
    scanf("%d", &entrada);

    for (i = 0; i < entrada; i++) {
        qnt_asterisco = qnt_asterisco + 1;

        for (l=0; l<qnt_asterisco; l++){
            printf("*");
            
        }
        printf("\n");
    }
}


