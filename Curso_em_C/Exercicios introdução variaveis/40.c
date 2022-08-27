#include <stdio.h>

int main (){
	//Variaveis
	int dia = 30, dias, desconto, salario;
	
	//Entradas
	printf("Quantos dias trabalhados?  ");
	scanf("%d", &dias);
		
	//Processamento
	desconto = (dias * dia) * 0.08;
	salario = (dias * dia) - desconto;
	
	//Saida
	printf("O seu salario sera:%d\n\n", salario);
}