#include <stdio.h>

int main(){

//Variaveis
float milhas, km; 

//entradas
printf("Digite a distância em quilômetros: ");
scanf("%f", &km);

//processamento
milhas = km / 1.61;

//saida
printf("A distância em milhas é %.2f\n\n", milhas);
}