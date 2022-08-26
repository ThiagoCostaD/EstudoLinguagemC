#include <stdio.h>

int main(){

//Variaveis
float Kg, Libras; 

//entradas
printf("Digite a massa em Kg: ");
scanf("%f", &Kg);

//processamento
Libras = Kg / 0.45;

//saida
printf("O volume em Libras é %.2f\n\n", Libras);
}