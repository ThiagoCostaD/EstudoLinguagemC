#include <stdio.h>

int main(){
	//Variaveis
	float raio, area;

	//entradas
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	
	//processamento
	area = 3.141592 * (raio * raio);

	//saida
	printf("O valor da area e: %.2f.\n", area);
}