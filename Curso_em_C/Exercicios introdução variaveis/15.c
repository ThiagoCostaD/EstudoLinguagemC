#include <stdio.h>

int main(){

//Variaveis
float graus, radianos; 

//entradas
printf("Digite o ângulo em radianos: ");
scanf("%f", &radianos);

//processamento
graus = radianos *180/3.14;

//saida
printf("O ângulo em graus é %.2f\n\n", graus);
}