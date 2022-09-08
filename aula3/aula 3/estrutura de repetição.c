// estruturas de repetição em c
// for
//while (checa a condição no inicio)
// do - while (checa a condição na saida)

#include <stdio.h>
int main(){
    //imprimir alguma coisa varias vezes
    int i,j;
    //sintaxe do for
    // for(inicio; final; passo);
    for (i = 0, j = 10; i <= 10, j > 0; i++, j--){
        printf("%d %d roberto", i,j);
    }
    
    // sintaxe do while
    /* 
    inicializa a variavel
    while (condição de termino){
        codigo a ser repetido
        incremento da variavel
    }
    */

   i = 0; // inicializa a variavel
   while(i < 10) // condição de termino
   {
    printf("roberto");
    i++; // incremento da variavel
   };

   i = 11;
   do
   {
    printf("%d - roberto", i);
    i++;
   } while (i<10);
   
    return 0;
}