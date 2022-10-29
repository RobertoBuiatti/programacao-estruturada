/*
10) Faça uma função que receba dois valores inteiros (x, y) e retorne a norma do vetor (|v|), conforme fórmula a seguir.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
float n,t1,t2,t3,count;
printf("numero do primeiro termo: ");
scanf("%f", &t1);
printf("numero do segundo termo: ");
scanf("%f", &t2);
n = (1/2.0);
t3 = sqrt((t1*t1)+(t2*t2));
printf("modulo de %.2f e %.2f = %.4f\n", t1, t2, t3);

return 0;
}