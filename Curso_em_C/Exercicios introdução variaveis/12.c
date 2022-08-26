#include <stdio.h>

int main(){

//Variaveis
float milhas, km; 

//entradas
printf("Digite a distância em milhas: ");
scanf("%f", &milhas);

//processamento
km = milhas * 1.61;

//saida
printf("A distância em quilômetros é %.2f\n\n", km);
}