#include <stdio.h>

int main(){
    int n1;
    int n2;
    float d1;
    float resultado1;
    float resultado2;
    float resultado3;

    printf("Escreva um numero: ");
    scanf("%d", &n1);
    printf("Escreva outro numero: ");
    scanf("%d", &n2);
    printf("Escreva um numero real: ");
    scanf("%f", &d1);
    resultado1 = (2*n1)+(2/n2);
    resultado2 = (3*n1)+d1;
    resultado3 = (d1*d1*d1);
    printf("Resultado do produto do dobro do primeiro com a metade do segundo:  %.2f\n", resultado1);
    printf("Resultado da soma do triplo do primeiro com o terceiro: %.2f\n", resultado2);
    printf("Resultado do terceiro ao cubo: %.2f\n", resultado3);

    return 0;
}