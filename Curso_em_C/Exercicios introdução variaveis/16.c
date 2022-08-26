#include <stdio.h>

int main(){

//Variaveis
float polegadas, centimetros; 

//entradas
printf("Digite o comprimento em polegadas: ");
scanf("%f", &polegadas);

//processamento
centimetros = polegadas * 2.54;

//saida
printf("O comprimento em centímetros é %.2f\n\n", centimetros);
}