#include <stdio.h>

int main (){
    //Variaveis
    int num;
    
    //Entradas
    printf("digite um numero inteiro: ");
    scanf("%d",&num);
    
    //Processamento e saida
    if(num%2==0)//operador %
        {printf("Par\n\n");
        }else
    printf("Ímpar\n\n");
}
