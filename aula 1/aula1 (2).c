#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// todo codigo em c precisa da função main
// Sintaxe de declaração de funções em C
// tipo nome (parâmetros) {code}

int main(){
	// declaração de variáveis em C
	// tipo nome;
	// tipo nome = valor;
	// qualquer duvida existe uma tabela só procurar type C no google

	int dia;
	int mes;
	int resultado;

	printf("Digite o valor do dia: \n");
	// scanf tem a função de entrada de dados, a palavra "&" tem o objetivo do local onde o dado é salvo e a função scanf nao roda sem "&"
	scanf("%d", &dia);
	printf("Digite o valor do mes: \n");
	scanf("%d", &mes);
	
	resultado = dia + mes;


	// saida na tela printf();
	printf("Hello duardo!\n");
	printf("hoje eh dia: %d+%d=%d\n",dia,mes,resultado);
	return 0;
}