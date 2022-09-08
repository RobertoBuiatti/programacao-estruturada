/*
05) Faça um procedimento que receba dois números aleatórios entre zero e 100, e imprima os números do intervalo entre eles.
Ex.: N1 = 17, N2 = 23. Imprime: 18, 19, 20, 21, 22.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int numero_aleatorio (int x){
    srand(time(NULL));
    int i,j,num1,min,max,total;
    min = 0, max = 101;
    for(i=0;i<max;i++){
    num1 = min + rand()%(max - min); // um numero aleatório entre o minimo e o maximo
    }

    return num1;
}

int main (){
    int x,y,num1;
    srand(time(NULL));
    int i,j,min,max,total;
    min = 0, max = 101;
    num1 = min + rand()%(max - min); // um numero aleatório entre o minimo e o maximo
    x = numero_aleatorio(x);
    printf("%d %d \n",x,num1);

    if (x> num1){
        j=num1;
        printf("%d \n",num1);
        for (i= num1; i < x; i++){
            j = j + 1;
            printf("%d \n",j);
    }
}
    else{
        j=x;
        printf("%d \n",x);
        for (i= x; i < num1; i++){
            j = j + 1;
            printf("%d \n",j);
    }
    }
}