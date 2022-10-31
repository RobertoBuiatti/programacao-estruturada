/*08) Faça um programa para gerar uma imagem conforme a figura abaixo:
A imagem tem cinco tons de cinza (0, 64, 128, 192, 255). Cada cor da imagem contém 20 pixels de altura e 60 pixels de largura. A imagem tem no total 100px de altura por 60px de largura.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    FILE *origem = fopen("imagem2.pgm", "w");

    int i,j,l=0,k,col=60,lin=100,vmax,media,val1,val2,val3,n=0;
    fprintf(origem, "P2\n");
    fprintf(origem, "#imagem2.pgm\n");
    fprintf(origem, "255\n");
    fprintf(origem, "100 60\n");
    srand(time(NULL));
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            fprintf(origem, "%d\n", n);
        }
        if ((i>0)&&(i % 20 == 0)){
            n = n + 64;
            if (n == 256){
                n = 255;
            }
        }
    }
    fclose(origem);

    return 0;
}