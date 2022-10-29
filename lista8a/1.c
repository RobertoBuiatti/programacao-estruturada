/*01 - Faça um código que grave em um arquivo 100 números aleatórios entre -100 e 100.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //Sintaxe do fopen()
    //FILE *arquivo = fopen("nomedoarquivo.txt", "w");
    FILE *arquivo = fopen("alunos.txt", "w");

    int i, j=0,num,h,l=0, n,k=0;
    int max = 101, min = -100;
    int vetor [101];
    int p[101];
    srand(time(NULL));

    if(arquivo == NULL){
        printf("Erro ao tentar abrir o arquivo.\n");
    }else{
        printf("Arquivo aberto com sucesso.\n");
    for (i=0 ; i<100;i++){
        n = min + rand()%(max - min);
        vetor[i] = n;
        k = k + n;
        printf("%d ", vetor[i]);
        //codigo se o arquivo foi aberto
        
        fprintf(arquivo, "%d ", vetor[i]);

        //Fechar o arquivo aberto
    }
    fclose(arquivo);
    }



    return 0;
}