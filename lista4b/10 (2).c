/*
10) Escreva um programa em C para exibir o padrão como o triângulo a seguir usando números. 
O usuário decide a altura dos triângulos fornecendo um número inteiro. Exemplo:

1
22
333
4444
55555
4444
333
22
1

*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int entrada, qnt_asterisco, l, i;
    qnt_asterisco = 0;
    printf("Escolha a altura do triangulo: ");
    scanf("%d", &entrada);


    if (entrada % 2 != 0) { 
    entrada = entrada/2;
    
    for (i = 0; i < entrada; i++) {
        qnt_asterisco = qnt_asterisco + 1;

        for (l=0; l<qnt_asterisco; l++){
            printf("%d", qnt_asterisco);
            
        }
        printf("\n");
    }
    for (i = 0; i < entrada+1; i++) {
        for (l=qnt_asterisco; l>=0; l--){
            printf("%d", qnt_asterisco+1);
            
        }
        qnt_asterisco--;
        printf("\n");
}    
}
    else{
        entrada = entrada/2;
        for (i = 0; i < entrada; i++) {
        qnt_asterisco = qnt_asterisco + 1;

        for (l=0; l<qnt_asterisco; l++){
            printf("%d", qnt_asterisco);
            
        }
        printf("\n");
    }
    for (i = entrada; i >0; i--) {
        for (l=qnt_asterisco; l>0; l--){
            printf("%d", qnt_asterisco);
            
        }
        qnt_asterisco--;
        printf("\n");
    }
    }
    return 0;
}