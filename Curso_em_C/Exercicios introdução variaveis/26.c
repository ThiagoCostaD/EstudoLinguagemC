#include <stdio.h>

int main(){

//Variaveis
float metros², hec; 

//entradas
printf("Digite o comprimento em metros²: ");
scanf("%f", &metros²);

//processamento
hec = metros² * 0.0001;

//saida
printf("O comprimento em hectares é %.2f\n\n", hec);
}