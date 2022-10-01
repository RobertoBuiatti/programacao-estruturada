#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int min,max;
    min = -10, max = 10;
    int num,i;

    num = rand() % 101;// tem que definir o resto (%) para o numero inteiro ficar entre 0 e 100
    for (i = 0; i < 10; i++) {
        num = min + rand()%(max - min); // um numero aleatório entre o minimo e o maximo
        printf("num = %d\n", num);
    }


}