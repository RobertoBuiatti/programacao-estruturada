/*03) Crie um arquivo com o nome "imagem3.ppm". O conteúdo desse arquivo deve ser exatamente como orientado. 
Primeira linha: P3. Segunda linha: #imagem3.ppm. Terceira linha: 100 100. 
Quarta linha: 255. A partir da quinta linha: Gere uma matriz 100x300 com números aleatórios entre 0 e 255.
P3
#imagem3.ppm
100 100
255
250 123 14 123 … 245
211 178 84 179  … 100
…
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    FILE *origem = fopen("imagem3.ppm", "w");

    int i,j,k,col=300,lin=100,vmax,media,val1,val2,val3, min=0, max=256,n;
    char buffer [250];
    char buffer2[250];
    fprintf(origem, "P3\n");
    fprintf(origem, "#imagem3.ppm\n");
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