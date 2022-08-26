#include <stdio.h>

int main(){

//Variaveis
float M, L; 

//entradas
printf("Digite o volume em metros³: ");
scanf("%f", &M);

//processamento
L = M * 1000;

//saida
printf("O volume em litros é %.2f\n\n", L);
}