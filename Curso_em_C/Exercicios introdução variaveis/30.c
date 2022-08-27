#include <stdio.h>

int main(){
	//Variaveis
	float real, dolar = 5.09, cambio;

	//entradas
	printf("Digite o valor em reais: ");
	scanf("%f", &real);
	
	//processamento
	cambio = real/dolar;

	//saida
	printf("O valor em dolar e: %.2f.\n\n", cambio);
}