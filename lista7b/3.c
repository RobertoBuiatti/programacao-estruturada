<<<<<<< HEAD
/*03) Crie um array 3D (10x10) com valores aleatórios entre 0 e 255. 
Crie uma matriz 2D (10x10) onde o valor de cada elemento é a média entre os três valores do array 3D.*/

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
=======
/*03) Crie um array 3D (10x10) com valores aleatórios entre 0 e 255. 
Crie uma matriz 2D (10x10) onde o valor de cada elemento é a média entre os três valores do array 3D.*/

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
>>>>>>> 1b25867804bc94a0d1242de40886da8f1a4251be
}