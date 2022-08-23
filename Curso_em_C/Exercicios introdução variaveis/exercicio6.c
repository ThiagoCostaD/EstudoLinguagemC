#include <stdio.h>

int main(){

//Variaveis
float celsios, fahrenheit; 

//entradas
printf("Digite a temperatura em celsios: ");
scanf("%f", &celsios);

//processamento
fahrenheit = celsios*1.8+32;

//saida
printf("A temperarura em fahrenheit é %.2f\n\n", fahrenheit);
}