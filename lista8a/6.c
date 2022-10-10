/*06 - Gere uma matriz 10x10 com números aleatórios entre 10 e 99 e grave a matriz em um arquivo.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //Sintaxe do fopen()
    //FILE *arquivo = fopen("nomedoarquivo.txt", "w");
    FILE *arquivo = fopen("alunos.txt", "w");

    int i, j=0,num,h,l=0, n,k=0;
    int max = 100, min = 10;
    int vetor [101];
    int p[101];
    srand(time(NULL));

    if(arquivo == NULL){
        printf("Erro ao tentar abrir o arquivo.\n");
    }else{
        printf("Arquivo aberto com sucesso.\n");
        for (i = 0; i<10;i++){
            for (j = 0; j<10; j++){
                n = min + rand()%(max - min);
                vetor[i] = n;
                fprintf(arquivo, "%d ", vetor[i]);
            }
            fprintf(arquivo, "\n");
        }
        fclose(arquivo);
    }

    return 0;
}