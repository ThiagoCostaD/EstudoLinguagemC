#include <stdio.h>

int main(){
    //Variáveis
    float indice;

    //Entradas
    printf("Informe o indice de poluição: ");
    scanf("%f", &indice);

    //Processamento
    if(indice >= 0.3 && indice < 0.4){
        printf("Atenção: Indústrias do 1º grupo devem suspender as atividades.");
    }else if(indice >= 0.4 && indice < 0.5){
        printf("Atenção: Indústrias do 1º e 2º grupo devem suspender as atividades.");
    }else if(indice >= 0.5){
        printf("Atenção: Todos os grupo devem suspender as atividades.");
    }

}