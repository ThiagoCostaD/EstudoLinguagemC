#include <stdio.h>

int main(){
    int valor = 5;
    printf("Valor vale %d\n", valor);

    //Deslocamento de bits para esquerda
    valor =  valor << 2;
    printf("Valor vale %d\n", valor);

    valor = 5;
    //deslocamento de bits para a direita
    valor = valor >> 1;
    printf("Valor vale %d\n", valor);

    valor = 5;
    valor = ~valor;
    printf("Valor vale %d\n\n", valor);

}