#include <stdio.h>

int main(){

//Variaveis
float graus, radianos; 

//entradas
printf("Digite o ângulo em graus: ");
scanf("%f", &graus);

//processamento
radianos = graus *3.14/180;

//saida
printf("O ângulo em radianos é %.2f\n\n", radianos);
}