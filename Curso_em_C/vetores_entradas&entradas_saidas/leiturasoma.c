#include <stdio.h>

int main(){
    FILE *arq;
    int num, resultado, soma = 0;
    arq = fopen("leiturasoma.txt", "r");

    if (arq){
        while (!feof (arq)){
           resultado = fscanf(arq, "%d", &num);
           //printf("Resultado: %d\n", resultado);
           if(resultado == 1){
           soma = soma+ num;
           }
        }
    }else{
        printf("Não achei o arquivo");
    }
    printf("A soma dos números encontrados é %d\n\n", soma);
    fclose(arq);
    return 0;
}