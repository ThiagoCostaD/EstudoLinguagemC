#include <stdio.h>
#include <math.h>

int main(){
    //Variaveis
    int num1, resultado;

    //Entradas
    printf("Digite um número: ");
    scanf("%d", &num1);

    //Processamento
    if ((num1 >= 0)){
            (resultado = sqrt(num1));
            printf("O resultado é %d\n\n", resultado);
    }else{
        
        printf("número inválido\n\n");
    }
}