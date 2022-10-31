/*04) Faça um programa para gerar um arquivo de imagem monocromática (.pbm) para gerar um arquivo para cada número do 0 ao 9.
Faça um programa apenas que gerará todos os arquivos. Não faça um programa para cada arquivo. 
Os nomes dos arquivos devem seguir o padrão 0.pbm, 1.pbm, 2.pbm, etc.
O tamanho de cada imagem deve ser 10 pixels de altura e 7 pixels de largura. 
Informações sobre o formato pbm podem ser en

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i,j,k,l,col=7,lin=10,vmax,media,val1,val2,val3, min=0, max=2,n,r,g,b;
    char buffer [250];
    char buffer2[250];
for (l=0;l<10;l++){
    if (l==1){
        FILE *origem = fopen("1.pbm","w");
        fprintf(origem, "P1\n");
        fprintf(origem, "#imagem1.pbm\n",l);
        fprintf(origem, "10 7\n");
        srand(time(NULL));
        for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                    r = 255;
                    g = 215;
                    b = 0;
                    fprintf(origem, "%d %d %d ", r,g,b);
                
        }
    }
    fclose(origem);
}
else if (l==2){
        FILE *origem = fopen("2.pbm","w");
        fprintf(origem, "P2\n");
        fprintf(origem, "#imagem2.pbm\n",l);
        fprintf(origem, "10 7\n");
        srand(time(NULL));
        for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                    r = 255;
                    g = 215;
                    b = 0;
                    fprintf(origem, "%d %d %d ", r,g,b);
        }
    }
    fclose(origem);
}
else if (l==3){
        FILE *origem = fopen("3.pbm","w");
        fprintf(origem, "P3\n");
        fprintf(origem, "#imagem3.pbm\n",l);
        fprintf(origem, "10 7\n");
        srand(time(NULL));
        for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                    r = 255;
                    g = 215;
                    b = 0;
                    fprintf(origem, "%d %d %d ", r,g,b);
        }
    }
    fclose(origem);
}
else if (l==4){
        FILE *origem = fopen("4.pbm","w");
        fprintf(origem, "P4\n");
        fprintf(origem, "#imagem4.pbm\n",l);
        fprintf(origem, "10 7\n");
        srand(time(NULL));
        for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                    r = 255;
                    g = 215;
                    b = 0;
                    fprintf(origem, "%d %d %d ", r,g,b);
        }
    }
    fclose(origem);
}
else if (l==5){
        FILE *origem = fopen("5.pbm","w");
        fprintf(origem, "P5\n");
        fprintf(origem, "#imagem5.pbm\n",l);
        fprintf(origem, "10 7\n");
        srand(time(NULL));
        for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                    r = 255;
                    
                    fprintf(origem, "%d %d %d ", r);
        }
    }
    fclose(origem);
}
else if (l==6){
        FILE *origem = fopen("6.pbm","w");
        fprintf(origem, "P6\n");
        fprintf(origem, "#imagem6.pbm\n",l);
        fprintf(origem, "10 7\n");
        srand(time(NULL));
        for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                    r = 255;
                    g = 215;
                    b = 0;
                    fprintf(origem, "%d %d %d ", r,g,b);
        }
    }
    fclose(origem);
}
else if (l==7){
        FILE *origem = fopen("7.pbm","w");
        fprintf(origem, "P7\n");
        fprintf(origem, "#imagem7.pbm\n",l);
        fprintf(origem, "10 7\n");
        srand(time(NULL));
        for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                    r = 255;
                    g = 215;
                    b = 0;
                    fprintf(origem, "%d %d %d ", r,g,b);
        }
    }
    fclose(origem);
}
else if (l==8){
        FILE *origem = fopen("8.pbm","w");
        fprintf(origem, "P8\n");
        fprintf(origem, "#imagem8.pbm\n",l);
        fprintf(origem, "10 7\n");
        srand(time(NULL));
        for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                    r = 255;
                    g = 215;
                    b = 0;
                    fprintf(origem, "%d %d %d ", r,g,b);
        }
    }
    fclose(origem);
}
else if (l==9){
        FILE *origem = fopen("9.pbm","w");
        fprintf(origem, "P9\n");
        fprintf(origem, "#imagem9.pbm\n",l);
        fprintf(origem, "10 7\n");
        srand(time(NULL));
        for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
                    r = 255;
                    g = 215;
                    b = 0;
                    fprintf(origem, "%d %d %d ", r,g,b);
        }
    }
    fclose(origem);
}
}
    return 0;
}