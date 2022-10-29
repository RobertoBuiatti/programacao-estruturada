#include <stdio.h>
#include <stdlib.h>

int main(){
    float raio;
    float perimetro;
    float area;
    float pi = 3.141592653589793;
    printf("escreva o raio do circulo: ");
    scanf("%f", &raio);
    area = pi * (raio * raio);
    perimetro = 2 * pi * raio;

    printf("perimetro: %.2f\n", perimetro);
    printf("area: %.2f\n", area);    
    return 0;    
}