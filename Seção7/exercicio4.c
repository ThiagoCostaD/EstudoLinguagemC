#include <stdio.h>

int main(){
    //Variáveis
    int valor, maior = -999, menor = 999, soma = 0;
    float media;

    //Entradas
    for (int i = 0; i < 10; i++)
    {
        printf("Informe um valor: ");
        scanf("%d", &valor);
        //Processamentos
        if(valor > 0){
            if (valor > maior){
                maior = valor;
            }
            if(valor < menor){
                menor = valor;
            }
            soma = soma + valor;
        }else{
            i --;
        }
    }
    media = soma / 10;
    printf("O Maior número é %d\n", maior);
    printf("O Menor número é %d\n", menor);
    printf("A Média dos número é %2.f", media);
}