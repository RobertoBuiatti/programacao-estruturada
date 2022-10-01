/*04) Preencher um vetor de oito elementos inteiros aleatórios entre 0 e 50. 
Mostrar o vetor e informar quantos números são maiores que 30, somar estes números. 
Também somar todos os números.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int i, j=0,num,h,l=0, n,k=0;
    int max = 51, min = 0;
    int vetor [8];
    int p[8];
    srand(time(NULL));

    for (i=0 ; i<8;i++){
        n = min + rand()%(max - min);
        vetor[i] = n;
        k = k + n;
        printf("%d ", vetor[i]);
        if (n >= 30){
            j++;
            l = l + n;
        }
}
printf("\n");
for (i=0;i<8;i++){
    if (vetor[i] >= 30){
    printf("%d ", vetor[i]);   
    }    
}
        printf("\n%d soma de todos os numeros\n", k);
        printf("%d numeros maior que 30\n",j);
        printf("%d soma dos numeros maiores que 30\n",l);
}