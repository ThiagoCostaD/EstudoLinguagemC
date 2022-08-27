#include <stdio.h>

int main(){
	//Variaveis
	int lado, area;

	//entradas
	printf("Digite o valor do lado: ");
	scanf("%d", &lado);
	
	//processamento
	area = lado * lado;

	//saida
	printf("O valor da area e: %d.\n", area);
}