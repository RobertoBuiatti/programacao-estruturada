/*02) Crie um array 3D (10x10) com valores aleatórios entre 0 e 255.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int imagem[10][10][10];
    int i,j,k,n,min,max;
    min = 0,max = 256;
    printf("matriz: \n");
    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
            for(k=0;k<10;k++){
                n = min + rand()%(max - min);
                imagem[i][j][k] = n;
                printf("%2d ", imagem[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}