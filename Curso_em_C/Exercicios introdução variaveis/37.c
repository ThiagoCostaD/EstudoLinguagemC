#include <stdio.h>

int main (){
	//Variaveis
	float produto, desconto;
	
	//Entradas
	printf("Qual o valor do produto? " );
	scanf("%f", &produto);

	//Processamento
	desconto = produto - (produto * 0.12)  ;

	//Saida
	printf("O valor do produto e: %.2f\n\n", desconto);
}