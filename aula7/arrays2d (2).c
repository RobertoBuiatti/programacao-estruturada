//Matrizes, Arrays 2D
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int array[3];

    int linha ,coluna, soma3 = 0;


    int matriz[linha][coluna]; //um array de duas dimensões, cada dimensão tem tamanho 3

    int i, j, n;

    srand(time(NULL));

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            n = rand() % 10;
            matriz[i][j] = n;
            printf("%d ", matriz[i][j]);
            if(n==3){
                soma3++;
            }
        }
        printf("\n");
    }

    printf("Qtd de nums == 3: %d\n", soma3);

    //printf("Digite o novo valor para o primeiro elemento da matriz: ");
    //scanf("%d", &matriz[0][0]);//alterar a partir de uma entrada do usuário
    
    //matriz[0][0] = 15;//alterar direto no código

    matriz[0][0] = matriz[0][1] + matriz[0][2];

    printf("\n\n");
    
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}