#include <stdio.h>

int main(){

//Variaveis
float jardas, metros; 

//entradas
printf("Digite o comprimento em metros: ");
scanf("%f", &metros);

//processamento
jardas = metros / 0.91;

//saida
printf("O comprimento em jardas é %.2f\n\n", jardas);
}