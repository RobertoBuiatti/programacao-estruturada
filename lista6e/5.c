/*05) Crie um vetor de 4 posições. Preencha aleatoriamente somente com 0 e 1. Imprima o vetor na tela.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int i, j=0,num,h,l=0, n,k=0;
    int max = 2, min = 0;
    int vetor [4];
    int p[4];
    srand(time(NULL));

    for (i=0 ; i<4;i++){
        n = min + rand()%(max - min);
        vetor[i] = n;
        k = k + n;
        printf("%d ", vetor[i]);
        
}
}