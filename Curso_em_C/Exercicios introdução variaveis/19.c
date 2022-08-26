#include <stdio.h>

int main(){

//Variaveis
float M, L; 

//entradas
printf("Digite o volume em litros: ");
scanf("%f", &L);

//processamento
M = L / 1000;

//saida
printf("O volume em metros³ é %.2f\n\n", M);
}