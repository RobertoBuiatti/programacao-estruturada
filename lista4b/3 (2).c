/*03) Escreva um programa em C para fazer um padrão como triângulo de ângulo reto com um número que repetirá um número em uma linha. 
O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:
1
22
333
4444

*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int entrada, qnt_asterisco, l, i,j;
    qnt_asterisco = 0;
    printf("Escolha a altura do triangulo: ");
    scanf("%d", &entrada);
    j= 1;
    for (i = 0; i < entrada; i++) {
        qnt_asterisco = qnt_asterisco + 1;

        for (l=0; l<qnt_asterisco; l++){
            j;
            printf("%d",j);
            
        }
        
        j++;
        printf("\n");
    }
}