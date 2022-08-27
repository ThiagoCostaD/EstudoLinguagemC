#include <stdio.h>

int main (){
	//Variaveis
	int premio = 780000;
	float primeiro, segundo, terceiro;
	
	//Processamento
	primeiro = (premio * 0.46);
	segundo = (premio * 0.32);
	terceiro = premio - primeiro - segundo;
	
	//Saida
	printf("O primeiro recebera: %.2f\n", primeiro);
	printf("O segundo recebera: %.2f\n", segundo);
	printf("O terceiro recebera: %.2f\n", terceiro);
}