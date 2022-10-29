<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int imagem[3][3][3];
    int i,j,k;
    printf("matriz 3x3x3: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                imagem[i][j][k] = rand() % 10;
                printf("%2d ", imagem[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
=======
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int imagem[3][3][3];
    int i,j,k;
    printf("matriz 3x3x3: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                imagem[i][j][k] = rand() % 10;
                printf("%2d ", imagem[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
>>>>>>> 1b25867804bc94a0d1242de40886da8f1a4251be
}