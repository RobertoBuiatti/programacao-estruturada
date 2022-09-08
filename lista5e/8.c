/*
08) Utilize o programa do exercício 07 e faça outro procedimento que calcule o número de Euler (e). 
O número de Euler equivale a aproximadamente 2.71828, e pode ser encontrado com a seguinte fórmula: e = ∑1/n! = 1/(0!) + 1/(1!) + 1/(2!) + 1/(3!) + 1/(4!) + … 
Quanto maior o valor de n, mais preciso será o e. Faça com que seu procedimento exiba na tela uma lista com os valores de (n) e o seu (e) correspondente, 
sendo o n de 0 até 20. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int v,w,x,y,num1;
    double z;
    double fat,n;

printf("escolha um numero: ");

for (n=20; n>0; n--){
    z=1.0;
    x=0;
    for(fat = 1; n > 1; n = n - 1){
        z= (1/(fat))+z;        
        x++;
        fat = fat * n;
        printf("%d ",x);
        printf("%lf\n", z);
        printf("%lf\n", fat);
}
}

return 0;
}