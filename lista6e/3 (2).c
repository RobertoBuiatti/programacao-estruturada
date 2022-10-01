/*03) Preencher um vetor A com os números pares do número 2 ao 20. Preencher um vetor B com os números de 10 a 19. 
Somar os vetores acima (A[0] + B[0], A[1] + B[1], A[2] +  B[2], …). Imprimir os dois vetores (A e B)  e o vetor resultado da soma (A+B).
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int i, j=0,num,h, n;
    int max = 21, min = 2;
    int vetor [10];
    int vetor1[10];
    int vetor2[10];
    int p[8];
   
printf("\n");
    int k = 0;
    for (j=1,k=0; j<21,k<10; j++){
        if (j % 2 == 0){
            k++;
            vetor[k]=j;
        printf("%d ", vetor[k]);
        }
}

printf("\n");
    int l = 0;
    for (j =0,l=10;j<10,l<20;j++,l++){
        vetor1[j]=l;
        printf("%d ", vetor1[j]);
}
printf("\n");
    for (i=0;i<10;i++){
        vetor2[i]=vetor[i] + vetor1[i];
        printf("%d ", vetor2[i]);
}
return 0;
}