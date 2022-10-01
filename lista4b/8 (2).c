/* 08) Escreva um programa em C para exibir o padrão como dois triângulos de ângulo reto usando asteriscos.
 O usuário decide a altura dos triângulos fornecendo um número inteiro. Exemplo:

    * *
   ** **
  *** ***
 **** ****
***** *****

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,k,l,m;

    printf("Digite a altura da piramide: ");
    scanf("%d",&m);

    for (i=0; i<m; i++){
        for (j= m - i; j>=1; j--){
            printf(" ");
        }
        for (j - 1; j <= i; j++){
            printf("*");
        }
        printf(" ");
        for (l=0; l<j; l++){
            printf("*");
            
        }
        printf("\n");
    }
    return 0;
}