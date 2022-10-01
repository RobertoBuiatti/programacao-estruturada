/*10) Crie um vetor A e preencha-o com 20 números aleatórios entre 97 e 122. 
Imprima o vetor normalmente usando a máscara de números inteiros %d (ou %i). 
Imprima o mesmo vetor porém utilizando a máscara de char %c. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int i, j=0,h,l=0, n,k=0,num,num1,num2,erros;
    int max = 123, min = 97;
    int vetor [40];
    char p[40];
    
    int soma, resultado;
    srand(time(NULL));

    for (i=0 ; i<20;i++){
        n = min + rand()%(max - min);
        vetor[i] = n;
        printf("%d ",vetor[i]);
        p = n+'60';
       
}

return 0;
}
