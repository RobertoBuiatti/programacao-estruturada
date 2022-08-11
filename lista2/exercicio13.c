#include <stdio.h>
#include <stdlib.h>

int main(){
    char * classe = NULL;
    char * territorio = NULL;
    char * arma = NULL;
    int valor1;
    int valor2;
    int valor3;

    printf("\n");
    printf("\nClasses: \n");
    printf("1-Guerreiro\n2-Mago\n3-Druida\n4-Sacerdote\n");
    printf("escolha um numero correspondente a sua classe: ");
    scanf("%d", &valor1);
    switch(valor1) {
        case 1:
        classe = "Guerreiro";
        break;
        case 2:
        classe = "Mago";
        break;
        case 3:
        classe = "Druida";
        break;
        case 4:
        classe = "Sacerdote";
        break;
        default:
        printf("escolha invalida");
        break;
        }

    printf("%s",classe);

    printf("\n");
    printf("\nTerritorios: \n");
    printf("1-Azeroth\n2-Azkaban\n3-Aurora\n4-Brightwood\n");
    printf("escolha um numero correspondente ao seu territorio: ");
    scanf("%d", &valor2);
    switch(valor2) {
        case 1:
        territorio = "Azeroth";
        break;
        case 2:
        territorio = "Azkaban";
        break;
        case 3:
        territorio = "Aurora";
        break;
        case 4:
        territorio = "Brightwood";
        break;
        default:
        printf("escolha invalida");
        break;
        }
    printf("%s",territorio);

    printf("\n");
    printf("\nArmas: \n");
    printf("1-Machado cego\n2-Picareta invertida\n3-Adaga sem ponta\n4-Corrente sem elo\n");
    printf("escolha um numero correspondente ao seu territorio: ");
    scanf("%d", &valor2);
    switch(valor2) {
        case 1:
        arma = "Machado cego";
        break;
        case 2:
        arma = "Picareta invertida";
        break;
        case 3:
        arma = "Adaga sem ponta";
        break;
        case 4:
        arma = "Corrente sem elo";
        break;
        default:
        printf("escolha invalida");
        break;
        }
    printf("%s",arma);
    printf("\n");

    printf("\n Voce agora e um %s da regiao de %s armado com um %s.", classe, territorio, arma);

        return 0;
}