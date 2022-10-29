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
            printf("*");
            
        }
        printf("\n");
    }
    for (i = 0; i < entrada+1; i++) {
        for (l=qnt_asterisco; l>=0; l--){
            printf("*");
            
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
            printf("*");
            
        }
        printf("\n");
    }
    for (i = entrada; i >0; i--) {
        for (l=qnt_asterisco; l>0; l--){
            printf("*");
            
        }
        qnt_asterisco--;
        printf("\n");
    }
    }
    return 0;
}