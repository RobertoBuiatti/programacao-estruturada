#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioprohra;
    float horastrabalhadasmes;
    float salariobruto;
    float imposto;
    float inss;
    float sindicato;
    float salarioliquido;

    printf("quanto ganha por hora: ");
    scanf("%f", &salarioprohra);
    printf("quantas horas trabalha por mes: ");
    scanf("%f", &horastrabalhadasmes);
    
    salariobruto = horastrabalhadasmes * salarioprohra;
    imposto = salariobruto * 0.11;
    inss = salariobruto * 0.08;
    sindicato = salariobruto * 0.05;
    salarioliquido = salariobruto - imposto - inss - sindicato;
    printf("salariobruto: %.2f\n", salariobruto);
    printf("imposto: %.2f\n", imposto);
    printf("inss: %.2f\n", inss);
    printf("sindicato: %.2f\n", sindicato);
    printf("salarioliquido: %.2f\n", salarioliquido);

    return 0;

}