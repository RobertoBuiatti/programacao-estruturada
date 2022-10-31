/*01) Gere uma matriz 10x10 onde as linhas/colunas de 0 a 8 serão preenchidas aleatoriamente com valores entre 0 e 9. 
A linha 9 e a coluna 9, devem conter a soma dos elementos. Imprima a matriz. Exemplo: O elemento matriz[0][9] deve ter a soma de todos os elementos da primeira linha. 
O elemento matriz[9][0] deve ter a soma de todos os elementos da primeira coluna. E assim sucessivamente. Veja o exemplo abaixo para uma matriz 3x3.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int i,n,max,min,l,k=0,j;
    int vetor[100][100];
    max = 10; min=0;
    srand(time(NULL));
    for (i=0;i<9;i++){
        for (j=0;j<9;j++){
            
            n = min + rand()%(max - min);
            vetor [i][j] = n;
            printf("%3d ",vetor[i][j]);
            k = vetor[i][j]+k;
        }           
        vetor[i][j] = k;
    printf("%3d\n",k);
    k=0;
    }
    for (i=0;i<10;i++){
        k=0;
        for (j=0;j<10;j++){
            k+=vetor[j][i];
        }
        vetor[i][j] = k;
        printf("%3d ",vetor[i][j]);
    }
}
