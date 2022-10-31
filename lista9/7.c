/*07) Faça um programa para gerar um arquivo de imagem em escala de cinza (.pgm) onde cada linha da imagem tem um tom de cinza (começando do zero e indo até o 255). 
A imagem deve ter a dimensão de 256 linhas por 100 colunas.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    FILE *origem = fopen("imagem2.pgm", "w");

    int i,j,k,col=100,lin=256,vmax,media,val1,val2,val3, min=0, max=256,n;
    char buffer [250];
    char buffer2[250];
    fprintf(origem, "P2\n");
    fprintf(origem, "#imagem2.pgm\n");
    fprintf(origem, "100 100\n");
    fprintf(origem, "255\n");
    srand(time(NULL));
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
                n = i;
                fprintf(origem, "%d ", n);
        }
    }
    fclose(origem);

    return 0;
}