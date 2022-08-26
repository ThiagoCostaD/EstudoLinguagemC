#include <stdio.h>

int main(){

//Variaveis
float celsios, kelvin; 

//entradas
printf("Digite a temperatura em kelvin: ");
scanf("%f", &kelvin);

//processamento
celsios = kelvin - 273.15;

//saida
printf("A temperarura em celsios é %.2f\n\n", celsios);
}