#include <stdio.h>
#include <stdlib.h>

//Lista encadeada
struct st_no{
    int valor;
    struct st_no *prox;
};

typedef struct st_no no;


int vazia(no *le){
    if (le->prox == NULL){
        return 1;
    }else{
        return 0;
    }
}

void inicia(no *le){
    le ->prox = NULL;
}

void libera(no *le){
    if (!vazia(le)){
        no *proxNo, *atual;
        atual = le->prox;
        while (atual != NULL){
            proxNo = atual ->prox;
            free(atual);
            atual = proxNo;
        }
        
    }
    
}