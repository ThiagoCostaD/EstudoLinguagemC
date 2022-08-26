#include <stdio.h>

int main(){

//Variaveis
float metros², hec; 

//entradas
printf("Digite o comprimento em hectares: ");
scanf("%f", &hec);

//processamento
metros² = hec * 10000;

//saida
printf("O comprimento em metro² é %.2f\n\n", metros²);
}