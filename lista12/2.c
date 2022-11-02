#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv){
    FILE *origem = fopen(argv[1], "r");
    FILE *pretoebranco = fopen(argv[2], "w");
    FILE *coloridoaleatorio = fopen(argv[3], "w");
    //FILE *origem = fopen("dinossaurinho.ppm", "r");
    FILE *coloridoaleatorio2 = fopen(argv[4], "w");
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
            media = (matriz[i][j][0]+matriz[i][j][1]+matriz[i][j][2])/3;
            fprintf(pretoebranco, "%d ", media);
            fprintf(pretoebranco, "%d ", media);
            fprintf(pretoebranco, "%d ", media);
        }
    }

    fclose(pretoebranco);

    pretoebranco = fopen(argv[2], "r");

    fgets(buffer,250,pretoebranco);
    fgets(buffer,250,pretoebranco);
    fscanf(pretoebranco, "%d %d", &col,&lin);
    fscanf(pretoebranco, "%d", &vmax);
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            for(k=0;k<3;k++){
                fscanf(pretoebranco, "%d", &matriz[i][j][k]);
            }
        }
    }

    fprintf(coloridoaleatorio, "P3\n");
    fprintf(coloridoaleatorio, "# Criado por Roberto\n");
    fprintf(coloridoaleatorio, "%d %d\n",col,lin);
    fprintf(coloridoaleatorio, "%d\n",vmax);
    
    for(i=0;i<lin;i++){//transforma de preto e branco para as cores especificas
        for(j=0;j<col;j++){
            if((matriz[i][j][0]>=0) && (matriz[i][j][0]<65)){
                val1 = 121;
                val2 = 232;
                val3 = 9;
                fprintf(coloridoaleatorio, "%d %d %d ", val1,val2,val3);
            }
            else if((matriz[i][j][0]>=65) && (matriz[i][j][0]<129)){
                val1 = 28;
                val2 = 49;
                val3 = 237;
                fprintf(coloridoaleatorio, "%d %d %d ", val1,val2,val3);
            }
            else if((matriz[i][j][0]>=129) && (matriz[i][j][0]<194)){
                val1 = 204;
                val2 = 12;
                val3 = 178;
                fprintf(coloridoaleatorio, "%d %d %d ", val1,val2,val3);
            }
            else if((matriz[i][j][0]>=194) && (matriz[i][j][0]<256)){
                val1 = 242;
                val2 = 227;
                val3 = 10;
                fprintf(coloridoaleatorio, "%d %d %d ", val1,val2,val3);
            }
        }
    }

    fprintf(coloridoaleatorio2, "P3\n");
    fprintf(coloridoaleatorio2, "# Criado por Roberto\n");
    fprintf(coloridoaleatorio2, "%d %d\n",col,lin);
    fprintf(coloridoaleatorio2, "%d\n",vmax);
    
    for(i=0;i<lin;i++){//transforma de preto e branco para as cores especificas
        for(j=0;j<col;j++){
            if((matriz[i][j][0]>=0) && (matriz[i][j][0]<65)){
                val1 = 230;
                val2 = 227;
                val3 = 69;
                fprintf(coloridoaleatorio2, "%d %d %d ", val1,val2,val3);
            }
            else if((matriz[i][j][0]>=65) && (matriz[i][j][0]<129)){
                val1 = 16;
                val2 = 97;
                val3 = 0;
                fprintf(coloridoaleatorio2, "%d %d %d ", val1,val2,val3);
            }
            else if((matriz[i][j][0]>=129) && (matriz[i][j][0]<194)){
                val1 = 6;
                val2 = 36;
                val3 = 82;
                fprintf(coloridoaleatorio2, "%d %d %d ", val1,val2,val3);
            }
            else if((matriz[i][j][0]>=194) && (matriz[i][j][0]<256)){
                val1 = 0;
                val2 = 0;
                val3 = 0;
                fprintf(coloridoaleatorio2, "%d %d %d ", val1,val2,val3);
            }
        }
    }
    fclose(origem);
    fclose(pretoebranco);
    fclose(coloridoaleatorio);
    fclose(coloridoaleatorio2);
    return 0;
}