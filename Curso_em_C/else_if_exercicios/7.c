#include <stdio.h>

int main(){
    //Variaveis
    int num1, num2;

    //Entradas
    printf("Digite um número inteiro: ");
    scanf("%d", &num1);
    printf("Digite um número inteiro: ");
    scanf("%d", &num2);

    //Processamento
    if (num1 > num2){
        printf("Eesse é o maior numero: %d\n\n", num1);
    }else{
        printf("Eesse é o maior numero: %d\n\n", num2);
    }if else (num1 = num2){
        printf("Números iguais");
    }
}