#include <stdio.h>

int main(){

//Variaveis
float jardas, metros; 

//entradas
printf("Digite o comprimento em jardas: ");
scanf("%f", &jardas);

//processamento
metros = jardas * 0.91;

//saida
printf("O comprimento em metros é %.2f\n\n", metros);
}