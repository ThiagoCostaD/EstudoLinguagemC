#include <stdio.h>

int main(){
	//Variaveis
	int n1, ant, suc;

	//entradas
	printf("Digite um numero: ");
	scanf("%d", n1);
	
	//processamento
	ant = n1 -1;
	suc = n1 +1;

	//saida
	printf("O valor do antecessor e: %d.\n", ant);
	printf("O valor do sucessor e: %d.\n\n", suc);
}