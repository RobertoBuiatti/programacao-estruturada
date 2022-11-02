/*1) Faça um programa que leia uma imagem colorida, e faça uma cópia desta imagem conforme o exemplo abaixo. Uma parte central da imagem será em escala de cinza.*/

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
    int col2, lin2, col3, lin3;
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
    col2 = col/4;
    lin2 = lin/4;
    lin3 = 3*lin2;
    col3 = 3*col2;

    printf("%d %d %d %d %d ", col, lin, vmax, col2, lin2);

    fprintf(pretoebranco, "P3\n");
    fprintf(pretoebranco, "# Criado por Roberto\n");
    fprintf(pretoebranco, "%d %d\n",col,lin);
    fprintf(pretoebranco, "%d\n",vmax);
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            for(k=0;k<3;k++){
                if(i>=lin2 && i<=lin3 && j>=col2 && j<=col3){
                    media = (matriz[i][j][0]+matriz[i][j][1]+matriz[i][j][2])/3;
                    fprintf(pretoebranco, "%d ", media);
                }
                else{
                    fprintf(pretoebranco, "%d ", matriz[i][j][k]);
                }
            }
        }
    }

    fclose(pretoebranco);
    fclose(origem);
    return 0;
}