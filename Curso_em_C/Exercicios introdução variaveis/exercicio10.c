#include <stdio.h>

int main(){

//Variaveis
float kmh, ms; 

//entradas
printf("Digite velocidade em km/h: ");
scanf("%f", &kmh);

//processamento
ms = kmh / 3,6;

//saida
printf("A velocidade em m/s é %.2f\n\n", ms);
}