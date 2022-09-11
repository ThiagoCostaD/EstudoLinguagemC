#include <stdio.h>
#include <string.h>

//A union, separa e utiliza apenas o espaço da maior memória.

union pessoa{
    char nome[100];
    int idade;
};


int main(){

    union pessoa pes;
    
    strcpy( pes.nome, "Valéria Costa");
    printf("Dados de %s\n", pes.nome);

    pes.idade = 39;
    printf("Ela tem %d anos\n", pes.idade);

    printf("A variavel 'pes' esta ocupando %ld bytes em memória.\n\n", sizeof(pes));
  
    return 0;
}