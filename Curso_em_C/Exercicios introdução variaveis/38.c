#include <stdio.h>

int main (){
	//Variaveis
	float salario, salario1;
	
	//Entradas
	printf("Qual o valor do salario? " );
	scanf("%f", &salario);

	//Processamento
	salario1 = (salario * 0.25) + salario;

	//Saida
	printf("O valor do novo salario e: %.2f\n\n", salario1);
}