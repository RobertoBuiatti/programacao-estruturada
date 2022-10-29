/*
06) Faça um procedimento que receba um número aleatório entre 1000 e 9999, e faça a decomposição do número em unidade, dezena, centena e milhar.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int numero_aleatorio (int x){
    srand(time(NULL));
    int i,j,num1,min,max,total;
    min = 1000, max = 10000;
    for(i=0;i<max;i++){
    num1 = min + rand()%(max - min); // um numero aleatório entre o minimo e o maximo
    }

    return num1;
}

int main (){
    int v,w,x,y,z,num1;
    v=numero_aleatorio(v);
    printf("Numero %d\n",v);
    w = v / 1000;
    x = (v % 1000)/100;
    y = (v % 100)/10;
    z = (v % 10);
    printf("milhar:%d ",w);
    printf("centena:%d ",x);
    printf("dezena:%d ",y);
    printf("unidade:%d ",z);
}