/*07 - Faça um programa que leia um arquivo de texto qualquer e imprima seu conteúdo na tela, 
e no fim do conteúdo exiba a quantidade total de linhas do arquivo.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main(){
    //Sintaxe do fopen()
    //FILE *arquivo = fopen("nomedoarquivo.txt", "w");
    

    FILE *arquivo = fopen("alunos.txt", "r+");

    int i, j=0,num,h=1,l=0, n,k=0,n2,n3;
    int max1 = 21, min1 = 10;
    int max2 = 21, min2 = 5;
    int min3 = 16, max3 = 1;
    char conteudo [100];
    int vetor [101];
    int p[101];
    srand(time(NULL));
    setlocale(LC_ALL, "");
    
    if(arquivo == NULL){
        printf("Erro ao tentar abrir o arquivo.\n");
    }
    else{      
        
       while (l!=EOF){
           fgets(conteudo, 100, arquivo);
           if (feof(arquivo)){
               break;
           }
           printf("%d.",l+1);
           printf(" %s", conteudo);
            l++;
       }
    //    printf("O arquivo tem %d linhas", l);
    fclose(arquivo);}

    return 0;
}
