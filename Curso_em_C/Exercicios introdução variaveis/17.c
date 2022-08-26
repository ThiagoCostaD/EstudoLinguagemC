#include <stdio.h>

int main(){

//Variaveis
float polegadas, centimetros; 

//entradas
printf("Digite o comprimento em centímetros: ");
scanf("%f", &centimetros);

//processamento
polegadas = centimetros / 2.54;

//saida
printf("O comprimento em polegadas é %.2f\n\n", polegadas);
}