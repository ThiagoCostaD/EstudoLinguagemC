#include <stdio.h>

void select_sort(int vetor[], int tam){
    int menor, troca;

    //loop externo para repassar todo o vetor
    for (int i = 0; i < (tam -1); i++){
        menor = i;

        //loop interno para trabalhar com o próximo elemento
        for (int j = (i+1); j < tam; j++){
            if (vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        //ocorrendo a troca
        if (i != menor){
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = troca;
        }
                
    }
    
}



int main(){
    //vetor ordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    //função de ordenação utilizando select sort
    select_sort(vetor, 6);

    //apresntar vetor ordenado
    for (int i = 0; i < 6; i++){
        printf("%d\n\n", vetor[i]);
    }
    return 0;  
}