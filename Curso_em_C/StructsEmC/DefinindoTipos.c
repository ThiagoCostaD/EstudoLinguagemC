#include <stdio.h>
#include <string.h>

/*
structs -> estruturas
*/

struct st_aluno{
  char matrucula[50];
  char nome[150];
  char curso[50];
  int ano_nascimento;

};


int main(){
    struct st_aluno aluno1;

    printf("Infome a matricula:\n ");
    fgets(aluno1.matrucula, 50, stdin);
    
    printf("Infome o nome:\n ");
    fgets(aluno1.nome, 150, stdin);
    
    printf("Infome o curso:\n ");
    fgets(aluno1.curso, 50, stdin);
    
    printf("Infome o ano de nascimento:\n ");
    scanf("%d", &aluno1.ano_nascimento);

    printf("============= Dados do Aluno =============\n\n");
    printf("Matricula: %s\n", aluno1.matrucula);
    printf("Nome: %s\n", aluno1.nome);
    printf("Curso: %s\n", aluno1.curso);
    printf("Ano de nascimento: %d\n\n", aluno1.ano_nascimento);
    
    return 0;
}