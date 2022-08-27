#include <stdio.h>

int main(){
	//Variaveis
	float a, b, hipo;

	//entradas
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);	
	
	//processamento
	hipo = ((a*a)*a + (b*b)*b);

	//saida
	printf("O valor da area e: %.2f.\n", hipo);
}

