#include <stdio.h>

int main(){
	//Variaveis
	float raio, area, altura;

	//entradas
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	printf("Digite o valor do altura: ");
	scanf("%f", &altura);

	//processamento
	area = 3.141592 * (raio * raio) * altura;

	//saida
	printf("O valor da area e: %.2f.\n", area);
}