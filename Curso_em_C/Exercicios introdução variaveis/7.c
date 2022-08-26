#include <stdio.h>

int main(){

//Variaveis
float celsios, fahrenheit; 

//entradas
printf("Digite a temperatura em celsios: ");
scanf("%f", &fahrenheit);

//processamento
celsios = 5.0*(fahrenheit-32.0)/9.0;

//saida
printf("A temperarura em celsios é %.2f\n\n", celsios);
}