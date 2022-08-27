#include <stdio.h>

int main(){
	//Variaveis
	int n1, ant, suc, soma;

	//entradas
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	//processamento
	ant = (n1 * 2) -1;
	suc = (n1 * 3) -1;
	soma = ant + suc;

	//saida
	printf("O valor e: %d.\n", soma);
}	