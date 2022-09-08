/*
09) Crie um procedimento para imprimir a sequência de Fibonacci até o n-ésimo termo. 
O usuário deve digitar o valor de n, e o programa imprime todos os valores do 1 ao n-ésimo termo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int n,t1,t2,t3,count;
  printf("numero de termos de Fibonacci: ");
  scanf("%d", &n);
  t1=0;
  t2=1;
  printf("%d %d ",t1,t2);
  count=3;
  while(count<=n){
    t3=t1+t2;
    printf("%d ",t3);
    t1=t2;
    t2=t3;
    count++;
    }
     return 0;
   }