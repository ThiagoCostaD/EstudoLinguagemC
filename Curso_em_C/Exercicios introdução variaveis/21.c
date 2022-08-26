#include <stdio.h>

int main(){

//Variaveis
float Kg, Libras; 

//entradas
printf("Digite a massa em libras: ");
scanf("%f", &Libras);

//processamento
Kg = Libras * 0.45;

//saida
printf("O volume em Kg é %.2f\n\n", Kg);
}