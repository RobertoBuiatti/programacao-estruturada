//Estruturas de repetição em C
//for
//while
//do - while

#include<stdio.h>
int main(){
    //Imprimir alguma coisa várias vezes
    int i, j;
    
    //Sintaxe do FOR
    //for(inicio; final; passo){
    //        
    //}

    for(i = 0, j = 10; i <= 10, j > 2; i++, j--){
        printf("%d-%d Andre Luiz Franca Batista\n", i, j);
    }
    
    //Sintaxe do WHILE
    /*
    inicializar a variavel
    while(condição de término){
        código a ser repetido
        incremento/decremento da variável
    }
    */

    i = 11;//inicialização da variável
    while(i < 10){//condição de término
        printf("%d - André Luiz França Batista\n", i);
        i++;//passo, nesse caso incremento
    }

    //Sintaxe DO-WHILE
    /*
    do{
        código a ser repetido
    }while(condição de término);
    */
    i = 11;
    do{
        printf("%d - Andre Luiz F. Batista\n", i);
        i++;
    }while(i < 10);

    return 0;
    
}