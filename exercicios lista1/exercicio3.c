#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int dobro;
    int triplo;
    printf("escreva um numero: ");
    scanf("%d", &n);
    dobro = n * 2;
    triplo = n * 3;
    printf("\nvalor do numero entrado: %d\n", n);
    printf("valor do dobro do numero: %d\n", dobro);
    printf("valor do triplo do numero: %d\n", triplo);
    return 0;
}