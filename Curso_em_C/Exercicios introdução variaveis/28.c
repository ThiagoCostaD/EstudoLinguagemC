#include <stdio.h>

int main(){

//Variaveis
int n1, n2, n3, q1, q2, q3, soma;

//entradas
printf("Digite um número:");
scanf("%d", &n1);

printf("Digite um número:");
scanf("%d", &n2);

printf("Digite um número:");
scanf("%d", &n3);

//Processamento
q1=n1*n1;
q2=n2*n2;
q3=n3*n3;

soma=q1+q2+q3;

//saida
printf("O número é %d\n\n", soma);
}