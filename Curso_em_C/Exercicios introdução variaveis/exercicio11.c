#include <stdio.h>

int main(){

//Variaveis
float kmh, ms; 

//entradas
printf("Digite velocidade em m/s: ");
scanf("%f", &ms);

//processamento
kmh = ms * 3,6;

//saida
printf("A velocidade em Km/h é %.2f\n\n", kmh);
}