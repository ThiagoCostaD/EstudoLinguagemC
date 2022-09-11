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

}aluno1;


int main(){
    
    printf("Informe a matricula:\n ");
    fgets(aluno1.matrucula, 50, stdin);
    
    printf("Informe o nome:\n ");
    fgets(aluno1.nome, 150, stdin);
    
    printf("Informe o curso:\n ");
    fgets(aluno1.curso, 50, stdin);
    
    printf("Informe o ano de nascimento:\n ");
    scanf("%d", &aluno1.ano_nascimento);

    printf("============= Dados do Aluno =============\n\n");
    printf("Matricula: %s\n", aluno1.matrucula);
    printf("Nome: %s\n", aluno1.nome);
    printf("Curso: %s\n", aluno1.curso);
    printf("Ano de nascimento: %d\n\n", aluno1.ano_nascimento);
    
    return 0;
}