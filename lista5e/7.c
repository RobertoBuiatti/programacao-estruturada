/*
07) Faça uma função que calcule e retorne o fatorial de um número inteiro. 
O fatorial de um número n qualquer é dado pela fórmula: n! = n * n-1 * n-2 * n-3 * … * 1. Exemplo: 4! = 4 * 3 * 2 * 1 = 24.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int numero_aleatorio (int x){
    srand(time(NULL));
    int i,j,num1,min,max,total;
    min = 0, max = 10;
    for(i=0;i<max;i++){
    num1 = min + rand()%(max - min); // um numero aleatório entre o minimo e o maximo
    }

    return num1;
}

int main (){
    long long int n,v,w,x,y,z,num1,fat;



printf("escolha um numero: ");
scanf("%lld", &n) ;

for(fat = 1; n > 1; n = n - 1)
  {
      fat = fat * n;
  }

printf("%lld\n", fat);
return 0;
}
