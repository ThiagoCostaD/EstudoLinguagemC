#include <stdio.h>

/*
compilando via terminal
gcc 'nome do programa.c' -o nome do programa.qualquer coisa

*/

int main(){
    int qtd, soma = 0;

    printf("Quantos números você quer somar?\n");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++){
        soma = soma + i * 2 + 3;
    }
    printf("A soma é %d\n\n", soma);
}