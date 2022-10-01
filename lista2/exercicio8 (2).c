#include <stdio.h>

int main(){
    float tamanhodoarquivo;
    float linkinternet;
    float tempodownloadseg;
    float tempodownloadmin;

    printf("qual o tamanho do arquivo(MB)? ");
    scanf("%f", &tamanhodoarquivo);
    printf("qual a velocidade do link de internet (Mbps)? ");
    scanf("%f", &linkinternet);

    float velocidade = linkinternet / 8;
  
    tempodownloadmin = (tamanhodoarquivo / velocidade) / 60;
    printf("tempo de download: %f minutos", tempodownloadmin);

    return 0;
}