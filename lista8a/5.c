/*05 - Criação de texto aleatório. Gere um número aleatório entre 10 e 20 para linhas do texto. 
Para cada linha gere um número aleatório entre 5 e 20 para palavras. 
Para cada palavra gere um número aleatório entre 1 e 15 para letras. 
Essas letras devem ser aleatórias (tabela ASCII). Grave o texto em um arquivo.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //Sintaxe do fopen()
    //FILE *arquivo = fopen("nomedoarquivo.txt", "w");
    FILE *arquivo = fopen("alunos.txt", "w");

    int i, j=0,num,h=1,l=0, n,k=0,n2,n3;
    int max1 = 21, min1 = 10;
    int max2 = 21, min2 = 5;
    int min3 = 16, max3 = 1;
    char c;
    int vetor [101];
    int p[101];
    srand(time(NULL));
    
    if(arquivo == NULL){
        printf("Erro ao tentar abrir o arquivo.\n");
    }
    else{
        n = min1 + rand()%(max1 - min1);
        for (i=0 ; i<n;i++){
            n2 = min2 + rand()%(max2 - min2);
            for(j=0;j<n2;j++){
                n3 = min3 + rand()%(max3 - min3);
                c=n3+'0';
                fprintf(arquivo, "%c", c);
                printf("%c", c);
                printf("%d", n3);
            }

            fprintf(arquivo, "\n");
            printf("\n");
        }
        
        fclose(arquivo);
    }



    return 0;
}