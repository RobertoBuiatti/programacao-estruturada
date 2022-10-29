//01) Faça um código que preencha um vetor com números inteiros (oito elementos). Solicitar um número ao usuário. Pesquisar se esse número existe no vetor. 
//Se existir, imprimir em qual posição do vetor. Se não existir, imprimir uma mensagem que não existe.

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int i, j=0,num,h,l=0, n;
    int vetor [8];
    int p[8];
    srand(time(NULL));

    printf("\nescolha um numero que sera verificado se existe no vetor: ");
    scanf("%d", &num);
    for (i=0; i<8; i++){
        n = rand() % 10;
        vetor[i] = n;
        printf("%d ", vetor[i]);
        if (n == num){
            p[j]=i;
            l++;
        }
    }
    if (l==0){
        printf("\no numero nao existe no vetor");
    }
    else{
    printf("\no numero: %3d esta na posicao: ",num);
        if (l==1){
            for (h=0; h<l;){
                printf("\n%d do vetor",p[h]);
                h++;
    }
    }
        else{//errado
            for (h=0; h<l;){
                printf("\n%d do vetor",p[h]);
                h++;
    }
        }
    }
    return 0;
}