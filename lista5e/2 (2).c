/*
02) Faça uma função que simule um dado de 6 faces. 
Tente descobrir se este dado é viciado ou honesto. Jogue o dado mil vezes. 
Calcule a porcentagem de vezes que cada número (face do dado) saiu. Não precisa exibir os mil números. 
Exiba apenas a porcentagem de vezes que cada número saiu.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int porcentagem(int a, int b, int c, int d, int e, int f) {
    int soma;
    soma = (a+b+c+d+e+f);
    return soma;
}

int porcentagem_unitaria (int soma, int saida){
    int pu;
    pu = (saida*100)/soma;
    return pu;
}

int main(){
    srand(time(NULL));
    int i,j,num1,min,max,total;
    min = 1, max = 7;
    j = 1000;
    int s1=0, s2=0, s3=0, s4=0, s5=0, s6=0;
    float a, b, c, d, e, f;
    for(i=0; i<j; i++){
        num1 = min + rand()%(max - min); // um numero aleatório entre o minimo e o maximo
    switch(num1){
        case 1:
        s1++;
        break;

        case 2:
        s2++;
        break;

        case 3:
        s3++;
        break;

        case 4:
        s4++;
        break;
        
        case 5:
        s5++;
        break;

        case 6:
        s6++;
        break;

        default:
        break;
    }

    }
    a = porcentagem_unitaria(j,s1);
    b = porcentagem_unitaria(j,s2);
    c = porcentagem_unitaria(j,s3);
    d = porcentagem_unitaria(j,s4);
    e = porcentagem_unitaria(j,s5);
    f = porcentagem_unitaria(j,s6);    
    
    printf("Saida = %d\n", i);
    printf("s1 = %d, s2 = %d, s3 = %d, s4 = %d, s5= %d, s6= %d\n",s1,s2,s3,s4,s5,s6);
    printf("s1 = %.2f, s2 = %.2f, s3 = %.2f, s4 = %.2f, s5= %.2f, s6= %.2f\n",a,b,c, d, e, f);

}
