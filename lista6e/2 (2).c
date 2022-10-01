/*
02) Preencher um vetor com os números pares do número 2 ao 20. Imprimir na tela o vetor.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int i, j=0,num,h,l=0, n;
    int max = 21, min = 2;
    int vetor [8];
    int p[8];
    srand(time(NULL));

    for (i=0 , h=0; i<8,h<6; i++, h++){
        n = min + rand()%(max - min);
        if (n % 2 == 0){
            vetor[i] = n;
        }
        else{
            i--;
        }
        
        printf("%d ", vetor[i]);
    }
printf("\n");
    int k = 0;
    for (j=1,k=0; j<21,k<10; j++){
        if (j % 2 == 0){
            k++;
            vetor[k]=j;
        printf("%d ", vetor[k]);
        }
}
}