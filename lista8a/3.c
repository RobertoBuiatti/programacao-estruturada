<<<<<<< HEAD
/*03 - Faça um código que receba números inteiros do usuário, e grave em um arquivo esses números,
 juntamente com as informações se ele é positivo ou negativo, se ele é par ou ímpar. O programa só termina se o usuário digitar 0 (zero).*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //Sintaxe do fopen()
    //FILE *arquivo = fopen("nomedoarquivo.txt", "w");
    FILE *arquivo = fopen("alunos.txt", "w");

    int i, j=0,num,h=1,l=0, n,k=0;
    int max = 101, min = -100;
    int vetor [101];
    int p[101];
    
    if(arquivo == NULL){
        printf("Erro ao tentar abrir o arquivo.\n");
    }else{
        printf("Arquivo aberto com sucesso.\n");
        while (h!=0)
        {
            printf("Escreva um numero inteiro: ");
            scanf("%d",&h);
                if (h!=0){
                    if(h%2== 0){
                        if(h>0){
                            fprintf(arquivo, "%d -> positivo e par\n", h);
                        }
                        else{
                            fprintf(arquivo, "%d -> negativo e par\n", h);
                        }
                    }
                    else{
                        if(h>0){
                            fprintf(arquivo, "%d -> positivo e impar\n", h);
                        }
                        else{
                            fprintf(arquivo, "%d -> negativo e impar\n", h);
                        }
                    }
                }
          
        }
        
        fclose(arquivo);
    }



    return 0;
=======
/*03 - Faça um código que receba números inteiros do usuário, e grave em um arquivo esses números,
 juntamente com as informações se ele é positivo ou negativo, se ele é par ou ímpar. O programa só termina se o usuário digitar 0 (zero).*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //Sintaxe do fopen()
    //FILE *arquivo = fopen("nomedoarquivo.txt", "w");
    FILE *arquivo = fopen("alunos.txt", "w");

    int i, j=0,num,h=1,l=0, n,k=0;
    int max = 101, min = -100;
    int vetor [101];
    int p[101];
    
    if(arquivo == NULL){
        printf("Erro ao tentar abrir o arquivo.\n");
    }else{
        printf("Arquivo aberto com sucesso.\n");
        while (h!=0)
        {
            printf("Escreva um numero inteiro: ");
            scanf("%d",&h);
                if (h!=0){
                    if(h%2== 0){
                        if(h>0){
                            fprintf(arquivo, "%d -> positivo e par\n", h);
                        }
                        else{
                            fprintf(arquivo, "%d -> negativo e par\n", h);
                        }
                    }
                    else{
                        if(h>0){
                            fprintf(arquivo, "%d -> positivo e impar\n", h);
                        }
                        else{
                            fprintf(arquivo, "%d -> negativo e impar\n", h);
                        }
                    }
                }
          
        }
        
        fclose(arquivo);
    }



    return 0;
>>>>>>> 1b25867804bc94a0d1242de40886da8f1a4251be
}