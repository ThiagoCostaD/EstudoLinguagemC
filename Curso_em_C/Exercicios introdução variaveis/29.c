#include <stdio.h>

int main(){

//Variaveis
int n1, n2, n3, n4, soma;
float media;

//entradas
printf("Digite nota 1: ");
scanf("%d", &n1);

printf("Digite nota 2: ");
scanf("%d", &n2);

printf("Digite nota 3: ");
scanf("%d", &n3);

printf("Digite nota 4: ");
scanf("%d", &n4);

//Processamento
soma = n1 + n2 + n3 + n4;

media=soma/4;

//saida
printf("A nota média é %.2f\n\n", media);
}