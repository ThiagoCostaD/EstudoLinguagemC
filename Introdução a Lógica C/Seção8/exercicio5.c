#include <stdio.h>
int main(){
    //variaveis
    int vetor[10];
    char tem_maior50 = 0;

    //entradas
    for (int i = 0; i < 10; i++){
        printf("Infome o valor para o vetor %d/10: ", (i+1));
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++){
        if (vetor[i] > 50){
            printf("O número %d está na posição %d\n", vetor[i], i);
            tem_maior50 = 1;
        }
    }
    if (tem_maior50 < 1){
        printf("Não existe nenhum número maior que 50.");
    }
    
}