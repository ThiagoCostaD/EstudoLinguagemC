#include <stdio.h>
#include <string.h>

int main(){
    //variáveis
    char nome[100], senha[100];
    
    //Entradas
    printf("Informe o nome: ");
    gets(nome);
    printf("Informe a senha: ");
    gets(senha);

    //Processsamentos
    while (!strcmp(nome, senha)){
        printf("Nome de usuário e senha não podem ser o mesmo ");
        printf("Informe o nome: ");
        gets(nome);
        printf("Informe a senha: ");
        gets(senha);
    }
}