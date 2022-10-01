/*02) Faça um programa para resolver as quatro operações básicas entre matrizes (adição, subtração, multiplicação, multiplicação escalar). 
Gere duas matrizes (2x2 ou 3x3) com valores aleatórios para testar as operações.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
    int i,n,max,min,l,j,m;
    int k=0;
    int vetor[100][100];
    int vetor1[100][100];
    int resultado[100][100];
    max = 3; min=0;
    printf("escreva um numero para a multiplicacao escalar: ");
    scanf("%d",&m);
    printf("\n");
    srand(time(NULL));
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            
            n = min + rand()%(max - min);
            vetor [i][j] = n;
            printf("%3d ",vetor[i][j]);
        }           
        
    printf("\n");
    }
    printf("\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            
            n = min + rand()%(max - min);
            vetor1 [i][j] = n;
            printf("%3d ",vetor1[i][j]);
        }           
        
    printf("\n");
    }
    printf("Soma das matrizes: \n");
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
           resultado [i][j] = vetor1[i][j] + vetor[i][j];
           printf("%3d ",resultado[i][j]);
        }
        printf("\n");
    }
    printf("Subtracao das matrizes: \n");
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
           resultado [i][j] = vetor1[i][j] - vetor[i][j];
           printf("%3d ",resultado[i][j]);
        }
        printf("\n");
    }
     printf("multiplica das matrizes: \n");
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            for (l=0;l<3;l++){
                k +=  vetor[i][l]*vetor1[l][j];
            }
            resultado [i][j] = k;
            k=0;
           printf("%3d ",resultado[i][j]);
        }
        printf("\n");
    }
    printf("scalar multiplica matriz1: \n");
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
           resultado [i][j] = m * vetor[i][j];
           printf("%3d ",resultado[i][j]);
        }
        printf("\n");
    }
    printf("scalar multiplica matriz2: \n");
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
           resultado [i][j] = m * vetor1[i][j];
           printf("%3d ",resultado[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}