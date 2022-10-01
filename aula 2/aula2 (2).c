#include <stdio.h>
int main(){
    int mes;
    int dia;
    printf("escreva o dia do mes (de 1 a 31)");
    scanf("%d",&dia);
    if((dia>=1) && (dia<=31)){
        printf("Data dentro do intervalo solicitado:%d\n",dia);
    }
    else{
        printf("Data fora do intervalo solicitado: ");
        scanf("%d",&dia);
     }

    printf("Escreva o mes que esta (de 1 a 12):");
    scanf("%d",&mes);
    if((mes>=1) && (mes<=12)){
        printf("Data dentro do intervalo solicitado: %d\n",mes);
         }
    else{
        printf("Data fora do intervalo solicitado: ");
        scanf("%d\n",&mes);
         }
    //sintaxe do if em c
    /*
    if (condição){
        codigo se a condição for verdadeira
    }
     else{
        codigo se a condição não for verdadeira
         }
*/
    if (mes >= 7) {
        printf("Primeira metade do ano\n");
    }
     else {
        printf("Segunda metade do ano\n");
         }
 return 0;
}