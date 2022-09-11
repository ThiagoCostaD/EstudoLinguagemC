#include <stdio.h>
#include <string.h>

/*
structs -> estruturas
*/

struct st_contato{
  char nome[150];
  char telefone[50];
  char email[250];
  int ano_nascimento;

};

struct st_agenda{
    struct st_contato contato[100];
}agenda;
 



int main(){

    for (int i = 0; i < 2; i++){
       
        printf("Informe o nome:\n ");
        fgets(agenda.contato[i].nome, 150, stdin);
        
        printf("Informe o telefone:\n ");
        fgets(agenda.contato[i].telefone, 50, stdin);
        
        printf("Informe o e-mail:\n ");
        fgets(agenda.contato[i].email, 250, stdin);
        
        printf("Informe o ano de nascimento:\n ");
        scanf("%d", &agenda.contato[i].ano_nascimento);
        getchar();
    }

        printf("============= Agenda de Contatos =============\n");
    for (int i = 0; i < 2; i++){

        printf("============= Contato %d =============\n\n", (i+1));
        printf("Nome: %s\n", agenda.contato[i].nome);
        printf("Telefone: %s\n", agenda.contato[i].telefone);
        printf("e-mail: %s\n", agenda.contato[i].email);
        printf("Ano de nascimento: %d\n\n", agenda.contato[i].ano_nascimento);
    }    
    return 0;
}