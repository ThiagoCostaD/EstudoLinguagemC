#include <stdio.h>

int main(){
    //Variáveis
    int numero;

    //Entradas
    printf("Infome um numero: ");
    scanf("%d", &numero);

    //Processamento
    if(numero % 2 == 0){
        if(numero > 0){
            printf("O número %d é par e positivo", numero);
        }else{
            printf("O número %d é par e negativo", numero);
        }
    }else{
        if(numero > 0){
            printf("O número %d é ímpar e positivo", numero);
        }else{
            printf("O número %d é ímpar e negativo", numero);
        }
    }
}