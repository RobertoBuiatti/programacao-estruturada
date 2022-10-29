#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float area;
    int lata;
    float litrosdetintapormetro = 1/3.0;
    float custolata = 80;
    float custopelaarea;

    printf("Area em metros quadrados: ");
    scanf("%f", &area);
    lata = ceil((litrosdetintapormetro * area)/18);
    printf("Lata: %d\n", lata);
    custopelaarea = lata * custolata;
    printf("Custo pela area: %.2f\n", custopelaarea);
    return 0;
}