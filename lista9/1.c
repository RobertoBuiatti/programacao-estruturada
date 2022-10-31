/*01) Crie um arquivo com o nome "imagem.pbm". O conteúdo desse arquivo deve ser exatamente como orientado. 
Primeira linha: P1. Segunda linha: #imagem.pbm. Terceira linha: 100 100. 
A partir da quarta linha: Gere uma matriz 100x100 com números inteiros aleatórios entre 0 e 1.
P1
#imagem.pbm
100 100
0 0 0 1 … 0
1 0 0 1 … 1
…
Abra o arquivo no GIMP.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    FILE *origem = fopen("binario.pbm", "w");

    int i,j,k,col,lin,vmax,media,val1,val2,val3, min=0, max=2,n;
    char buffer [250];
    char buffer2[250];
    fprintf(origem, "P1\n");
    fprintf(origem, "#imagem.pbm\n");
    fprintf(origem, "100 100\n");
    srand(time(NULL));
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            for(k=0;k<3;k++){
                n = min + rand()%(max - min);
                fprintf(origem, "%d ", n);
            }
        }
    }
    fclose(origem);

    return 0;
}