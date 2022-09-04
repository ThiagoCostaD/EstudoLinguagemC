#include <stdio.h>

int main(){
    FILE *arq;
    char biblia[100];

    arq = fopen("escrita.txt", "a");
    if (arq){
        printf("Informe uma passagem ou 0 para sair: \n");
        fgets(biblia, 100, stdin);
        while (biblia[0]!='0'){
            fputs(biblia, arq);
            printf("Informe uma passagem ou 0 para sair: \n");
            fgets(biblia, 100, stdin);
        }
        
    }else{
        printf("Não consegui criar o arquivo!");
    }
    fclose(arq);
    return 0;
}