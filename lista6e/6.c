/*06) Pegue o vetor do exercício 5, e considere que ele gerou um número binário. Faça a conversão deste número binário para decimal.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main(){
    int i, j=0,num,h,l=0, n,k=0;
    int max = 2, min = 0;
    int vetor [4];
    int p[4];
    srand(time(NULL));

    for (i=0 ; i<4;i++){
        n = min + rand()%(max - min);
        vetor[i] = n;
       
}
for (i=3;i>=0;i--){
    k = k + (vetor[i]*pow(2,i));
        printf("%d ", vetor[i]);        
}
        printf("Rsultado: %d ", k);
}
