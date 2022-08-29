/* 07) Escreva um programa em C para fazer um padrão como triângulo de ângulo reto com número diminuindo de 1 em 1.
 O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:

5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1


*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int entrada, qnt_asterisco, l=0, i,j,k;
    qnt_asterisco = 0;
    printf("Escolha a altura do triangulo: ");
    scanf("%d", &entrada);
    qnt_asterisco = entrada;
    for (i = entrada; i > 0; i--) { 
        
        for (j=qnt_asterisco; j > 0; j--){
            printf("%d ", j);
            
            
        }
        
        qnt_asterisco--;
        printf("\n");
    }
}
