//Matrizes, Arrays 2D
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int array[3];

    int matriz[3][3];//um array de duas dimensões, cada dimensão tem tamanho 3

    int i, j, n;

    srand(time(NULL));

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            n = rand() % 10;
            matriz[i][j] = n;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");

    }

}