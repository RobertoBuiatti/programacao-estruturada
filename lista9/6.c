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