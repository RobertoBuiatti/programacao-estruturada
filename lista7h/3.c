#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int vetor[10][10];
    int kernel[3][3], products[3][3], sum[3][3];
    kernel[3][3] = [[1, -1, 1], [-1, 4, -1], [1, -1, 1]];
    printf("%3d", kernel[3][3]);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            vetor[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
        }
    }
    return 0;
}