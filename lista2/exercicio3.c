#include <stdio.h>
#include <stdlib.h>

int main(){
    float celsios;
    float farenheit;
    printf("escreva a temperatura em celsios: ");
    scanf("%f", &celsios);
    farenheit = (celsios*(9/5)+32);
    printf("A temperatura em farenheit e: %.2f",farenheit);
    
    return 0;

}