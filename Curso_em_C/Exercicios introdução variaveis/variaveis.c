//Aula de variaveis

#include <stdio.h>
           //chave delimita um bloco de codigo
int main(){ //inicio de bloco
    //Declarando variaveis
    int idade; //inteiro 

    //Função para escrever no console
    printf("Qual é a sua idade? "); //ponto e virgula finaliza o comando
    
    //receber dados
    scanf("%d", &idade);

    //saida
    printf("A sua idadde é %d\n\n", idade);
    
    return 0;
} //fim do bloco