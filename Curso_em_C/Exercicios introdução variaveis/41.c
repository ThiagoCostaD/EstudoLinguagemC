#include <stdio.h>

int main (){
	//Variaveis
	int hora_trabalhada, numero_hora, salario, salario_bonus;
	
	//Entradas
	printf("Qual o valor da hora trabalhada?  ");
	scanf("%d", &hora_trabalhada);
	printf("Qual o numero de horas trabalhada?  ");
	scanf("%d", &numero_hora);
		
	//Processamento
	salario = hora_trabalhada * numero_hora;
	salario_bonus = (salario * 0.1) + salario
	
	//Saida
	printf("O seu salario sera:R$ \n", salario_bonus);
}