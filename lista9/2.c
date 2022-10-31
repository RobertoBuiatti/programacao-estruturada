/*02) Crie um arquivo com o nome "imagem2.pgm". O conteúdo desse arquivo deve ser exatamente como orientado. 
Primeira linha: P2. Segunda linha: #imagem2.pgm. Terceira linha: 100 100. 
Quarta linha: 255. A partir da quinta linha: Gere uma matriz 100x100 com números aleatórios entre 0 e 255.
P2
#imagem2.pgm
100 100
255
50 23 14 123 … 45
11 78 84 79  … 100

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    FILE *origem = fopen("imagem2.pgm", "w");

    int i,j,k,col=100,lin=100,vmax,media,val1,val2,val3, min=0, max=256,n;
    char buffer [250];
    char buffer2[250];
    fprintf(origem, "P2\n");
    fprintf(origem, "#imagem2.pgm\n");
    fprintf(origem, "100 100\n");
    fprintf(origem, "255\n");
    srand(time(NULL));
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
                n = min + rand()%(max - min);
                fprintf(origem, "%d ", n);
        }
    }
    fclose(origem);

    return 0;
}