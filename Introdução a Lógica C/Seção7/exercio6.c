#include <stdio.h>

int main(){
    //Variáveis
    int numero;

    //Entrada
    printf("Infome um número de 1 a 10: ");
    scanf("%d", &numero);

    //Processamento
    while (numero < 1 || numero > 10){
        printf("Infome um número de 1 a 10: ");
        scanf("%d", &numero);
    }
    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", numero, i, (numero * i));
    }
    
}