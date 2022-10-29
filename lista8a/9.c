/*Faça um programa que leia um arquivo de texto qualquer e converta todas as letras minúsculas para maiúsculas,
 e grave em um novo arquivo. Conforme o exemplo a seguir.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<conio.h>
#include<time.h>

int main(){
    //Sintaxe do fopen()
    //FILE *arquivo = fopen("nomedoarquivo.txt", "w");
    

    FILE *arquivo = fopen("alunos.txt", "r+");
    FILE *arquivo2 = fopen("alunos2.txt", "w");

    int i, j=0,num,h=1,l=0, n,k=0,n2,n3;
    int max1 = 21, min1 = 10;
    int max2 = 21, min2 = 5;
    int min3 = 16, max3 = 1;
    int TamStr;
    char conteudo [100], maiusculos [100];
    int vetor [101];
    int p[101];
    srand(time(NULL));
    setlocale(LC_ALL, "");
    
    if((arquivo == NULL) || (arquivo2 == NULL)){
        printf("Erro ao tentar abrir o arquivo.\n");
    }
    else{      
        
       while (l!=EOF){
            fgets(conteudo, 100, arquivo);
            if (feof(arquivo)){
               break;
           }
            TamStr = strlen(conteudo);
            for(i=0; i<TamStr; i++){// Converte cada caracter de Str
            conteudo[i] = toupper (conteudo[i]);  // para maiusculas
            }
    fprintf(arquivo2, "%s",conteudo);
           
           
           printf(" %s", conteudo);
            l++;
       }
    //    printf("O arquivo tem %d linhas", l);
    fclose(arquivo);}

    return 0;
}