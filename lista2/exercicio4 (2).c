#include <stdio.h>
#include <stdlib.h>

int main(){
    float celsios;
    float farenheit;
    printf("escreva a temperatura em farenheit: ");
    scanf("%f", &farenheit);
    farenheit = (5*(farenheit-32)/9);
    printf("A temperatura em farenheit e: %.2f",farenheit);
    
    return 0;

}