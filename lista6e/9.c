/*09) Preencher um vetor com os números 10 a 20, e depois mostrar os elementos pares do vetor de trás para frente.
 E também mostrar os números ímpares.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main(){
    int i, j=0,num,h,l=0, n=10;
    int vetor [10];
    int p[10];
    
    printf("vetor dos: \n");
    for (i=0; i<11; i++){
        vetor[i] = n;
        n ++;
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("vetor dos numeros pares: \n");
    for (i=0; i<11; i++){
        if (vetor[i]%2==0){
            p[i] = vetor[i];
            printf("%d ", p[i]);
        }
        
        else{
            p[i] = vetor[i];
        }
    }
    printf("\nvetor dos numeros impares: \n");
    for ( i = 0; i < 11; i++){
        if (vetor[i]%2!=0){
        printf("%d ", p[i]);
    }
    }
    
return 0;
}