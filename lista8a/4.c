/*04 - Faça um código que escreva todos os números entre 1 e 50 em romanos em um arquivo. 
Um número por linha no seguinte formato: 1 :: I; 2 :: II; 3 :: III; 4 :: IV; etc.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    FILE *arquivo = fopen("numeros.txt", "w");

    if(arquivo==NULL) {

        printf("Erro ao abrir o arquivo\n");

    }
    else {
        for (int i = 1; i <= 50; i++) {
            int numero = i;
            char *romanos[] = {"I", "IV", "V", "IX", "X", "XL", "L"};
            int arabicos[] = {1, 4, 5, 9, 10, 40, 50};
            // acha a quantidade de elementos no array
            int indice = (sizeof(arabicos) / sizeof(arabicos[0])) - 1;

            fprintf(arquivo, "%d :: ", i);

            while (numero > 0) {                
                if (numero >= arabicos[indice]) {
                    fprintf(arquivo, "%s", romanos[indice]);
                    
                    numero -= arabicos[indice];

                }
                else {
                    indice--;

                }                
            }
                fprintf(arquivo, "\n");

        }

        fclose(arquivo);
    }

    return 0;
}