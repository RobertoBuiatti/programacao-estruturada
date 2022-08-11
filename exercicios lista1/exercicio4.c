#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;
    int n2;
    int resultado1;
    int resultado2;
    int resultado3;
    printf("Entre com o numero 1: ");
    scanf("%d", &n1);
    printf("Entre com o numero 2: ");
    scanf("%d", &n2);
    resultado1 = n1 + n2;
    resultado2 = n1 - n2;
    resultado3 = n1 * n2;
    printf("\nresultado de %d + %d = %d\n", n1,n2,resultado1);
    printf("resultado de %d - %d = %d\n", n1,n2,resultado2);
    printf("resultado de %d * %d = %d\n", n1,n2,resultado3);

    return 0;
}
