#include <stdio.h>

int main(){

    typedef float nota;
    nota prova1 = 7.2;
    nota prova2 = 8.2;

    nota soma=prova1+prova2;

    printf("A soma das notas é: %.2f\n\n", soma);


    return 0;
}