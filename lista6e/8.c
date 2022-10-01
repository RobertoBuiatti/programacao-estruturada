/*08) Preencher um vetor com cinco números e guardar o cubo dos números em outro vetor. Mostrar os dois vetores.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main(){
    int i, j=0,num,h,l=0, n;
    int vetor [5];
    int p[5];
    srand(time(NULL));

    for (i=0; i<5; i++){
        n = rand() % 10;
        vetor[i] = n;
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("vetor ao cubo dos numeros: \n");
    for (i=0; i<5; i++){
        n = rand() % 10;
        vetor[i] = vetor[i]*vetor[i]*vetor[i];
        printf("%d ", vetor[i]);
    }
return 0;
}