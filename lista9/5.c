/*05) Faça um programa que gere um arquivo (.pbm) com uma imagem de um labirinto de tamanho 11x11 conforme a figura a seguir.
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
    fprintf(origem, "11 11\n");
    srand(time(NULL));
    
    fprintf(origem, "1 1 1 1 1 1 1 1 1 1 1 \n 1 0 0 0 0 0 0 0 0 0 1 \n 1 1 1 1 1 1 1 1 1 0 1 \n 1 0 0 0 0 0 0 0 0 0 1 \n 1 0 1 1 1 1 1 1 1 1 1 \n 0 0 0 0 1 0 1 0 0 0 0 \n 1 1 1 0 1 0 1 0 1 0 1 \n 1 0 0 0 1 0 0 0 1 0 1 \n 1 0 1 1 1 1 1 1 1 0 1 \n 1 0 0 0 0 0 0 0 0 0 1 \n 1 1 1 1 1 1 1 1 1 1 1");
    fclose(origem);

    return 0;
}