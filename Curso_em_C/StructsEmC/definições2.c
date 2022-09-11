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

}alunos[5];


int main(){

    for (int i = 0; i < 5; i++){
       
        printf("Informe a matricula:\n ");
        fgets(alunos[i].matrucula, 50, stdin);
        
        printf("Informe o nome:\n ");
        fgets(alunos[i].nome, 150, stdin);
        
        printf("Informe o curso:\n ");
        fgets(alunos[i].curso, 50, stdin);
        
        printf("Informe o ano de nascimento:\n ");
        scanf("%d", &alunos[i].ano_nascimento);
        getchar();
    }

    for (int i = 0; i < 5; i++){

        printf("============= Dados do Aluno =============\n\n", (i+1));
        printf("Matricula: %s\n", alunos[i].matrucula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Curso: %s\n", alunos[i].curso);
        printf("Ano de nascimento: %d\n\n", alunos[i].ano_nascimento);
    }    
    return 0;
}