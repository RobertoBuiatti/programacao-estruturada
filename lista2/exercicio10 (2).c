//10) Fazer um programa que receba três stats do jogador: vida, ataque e defesa.
// A experiência do jogador (XP) é a média entre os três stats.
// Imprima o nível do jogador conforme a seguir:
// (0 a 25 XP) novato, 
//(26 a 50 XP) mago,
// (51 a 75 XP) mago supremo, 
//(76 a 100 XP)  lorde das magias.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float vida;
    float ataque;
    float defesa;
    float XP;

    printf("Escreva a vida: ");
    scanf("%f", &vida);
    printf("Escreva a ataque: ");
    scanf("%f", &ataque);
    printf("Escreva a defesa: ");
    scanf("%f", &defesa);
    XP = (vida+defesa+ataque)/3;

    if((XP >= 0) && (XP <=25)){
        printf ("Novato");
    }
    else if ((XP >25) && (XP <=50)){
        printf ("Mago");
    }
    else if ((XP >50) && (XP <=75)){
        printf ("Mago supremo");
    }
    else if ((XP >75) && (XP <= 100)){
        printf ("Lorde das magias");
    }
    else {
        printf ("fora de escala");
    }

    return 0;
}