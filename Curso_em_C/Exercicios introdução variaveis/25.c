#include <stdio.h>

int main(){

//Variaveis
float metros², acres; 

//entradas
printf("Digite o comprimento em acres: ");
scanf("%f", &acres);

//processamento
metros² = acres * 4048.58;

//saida
printf("O comprimento em metros² é %.2f\n\n", metros²);
}