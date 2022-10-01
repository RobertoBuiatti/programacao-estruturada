#include <stdio.h>
/*
01) Faça um programa que calcule o preço de skins da loja Rito Gomes.
 As skins custam R$ 1,30 cada se forem compradas menos de dez skins,
  e R$ 1,00 se forem compradas dez ou mais skins.
   Escreva um programa que leia o número de skins compradas, calcule e escreva o custo total da compra. 
*/

int main(){
    int numero_skins;
    float ate_10_skins;
    float mais_de_10_skins;
   
   printf("escreva o numero de skins que comprara: ");
   scanf("%d", &numero_skins);
   if(numero_skins >= 0 && numero_skins <= 10){
    ate_10_skins = numero_skins;
    printf(" numero de skins compradas: %d \n valor Total da compra: %.2f\n", numero_skins, ate_10_skins);
}
    else if(numero_skins > 10){
        mais_de_10_skins = numero_skins * 1.3;
        printf("numero de skins compradas: %d \n valor Total da compra: %.2f\n", numero_skins,mais_de_10_skins);
    }
}