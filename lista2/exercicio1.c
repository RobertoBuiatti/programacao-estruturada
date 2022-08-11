#include <stdio.h>
#include <stdlib.h>

int main(){
    int metros;
    float polegada;
    printf("Escreva o numero de metros: ");
    scanf("%d", &metros);
    polegada = (metros*100)/2.54;
    printf("%f", polegada);
}
