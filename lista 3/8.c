//08) Faça um programa que imprima na tela todas as tabuadas do 0 ao 9. Ex.

#include <stdio.h>

int main(){
    int i, j, numero,resto;
   numero = 0;
   j=0;
   for(i=0; i<10; i++){
    for(j=0; j<10; j++){
        resto = i * j;
        printf("%d*%d=%d\n",i,j,resto);
    }
    }
}