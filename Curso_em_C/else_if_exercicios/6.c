#include <stdio.h>

int main(){
    //Variaveis
    int num1, num2, diferenca;

    //Entradas
    printf("Digite um número inteiro: ");
    scanf("%d", &num1);
    printf("Digite um número inteiro: ");
    scanf("%d", &num2);

    //Processamento
    if (num1 > num2){
        printf("Eesse é o maior numero: %d\n\n", num1);
    }else
        printf("Eesse é o maior numero: %d\n\n", num2);
    diferenca = num1 - (num2);
     if (diferenca <= 0){
         (-1 * diferenca);}
    printf("A diferença é %d\n\n", diferenca);
}