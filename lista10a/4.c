/*04) Faça um programa que receba uma imagem (colorida ou escala de cinza) e retorne o negativo dessa imagem. 
Utilize a linha de comando para entrar com o nome do arquivo de entrada e o nome do arquivo de saída. */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv){
    FILE *origem = fopen(argv[1], "r");
    FILE *pretoebranco = fopen(argv[2], "w");
    //FILE *coloridoaleatorio = fopen(argv[3], "w");
    //FILE *origem = fopen("dinossaurinho.ppm", "r");
    //FILE *pretoebranco = fopen("qlqcoisa.ppm", "w");
    int i,j,k,col,lin,vmax,media,val1,val2,val3;
    char buffer [250];
    char buffer2[250];
    fgets(buffer,250,origem);
    fgets(buffer,250,origem);
    fscanf(origem, "%d %d", &col,&lin);
    int matriz[lin][col][3];
    fscanf(origem, "%d", &vmax);
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            for(k=0;k<3;k++){
                fscanf(origem, "%d", &matriz[i][j][k]);
            }
        }
    }

    printf("%d %d %d", col, lin, vmax);

    fprintf(pretoebranco, "P3\n");
    fprintf(pretoebranco, "# Criado por Roberto\n");
    fprintf(pretoebranco, "%d %d\n",col,lin);
    fprintf(pretoebranco, "%d\n",vmax);
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            for(k=0;k<3;k++){
                media = 255 - matriz[i][j][k];
                fprintf(pretoebranco, "%d ", media);              
            }
            
        }
    }

    fclose(pretoebranco);
    fclose(origem);
    return 0;
}