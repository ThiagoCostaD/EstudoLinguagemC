#include <stdio.h>

int main(){

//Variaveis
float celsios, kelvin; 

//entradas
printf("Digite a temperatura em celsios: ");
scanf("%f", &celsios);

//processamento
kelvin = celsios + 273.15;


//saida
printf("A temperarura em kelvin é %.2f\n\n", kelvin);
}