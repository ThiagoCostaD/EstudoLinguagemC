#include <stdio.h>
#include <stdlib.h>

struct st_arvore{
    int valor;
    struct st_arvore *sad;
    struct st_arvore *sae;
};

typedef struct st_arvore arvore;

arvore* criaArvore(){
    return NULL;
}

int arvoreEstaVazia(arvore* t){
    return t == NULL;
}

void mostraArvore(arvore* t){
    printf("<");
    if (!arvoreEstaVazia(t)){
        printf("%d", t->valor);
        mostraArvore(t->sae);
        mostraArvore(t->sad);
    }
    printf(">");
}

void insereDadoArvore(arvore** t, int num){
    if (*t == NULL){
        *t =  (arvore*)malloc(sizeof(arvore));
        (*t) ->sae = NULL;
        (*t) ->sad = NULL;
        (*t) ->valor = num;
    }else{
        if(num < (*t)->valor){
            insereDadoArvore(&(*t) ->sae, num);
        }
        if(num > (*t)->valor){
            insereDadoArvore(&(*t) ->sad, num);
        }
    }
}

int estaNaArvore(arvore* t, int num){
    if (arvoreEstaVazia(t)){
        return 0;
    }
    return t->valor==num || estaNaArvore(t ->sae, num) || estaNaArvore(t ->sad, num);
    }


int main(){

    arvore* t = criaArvore();

    insereDadoArvore(&t, 12);
    insereDadoArvore(&t, 15);
    insereDadoArvore(&t, 10);
    insereDadoArvore(&t, 13);

    mostraArvore(t);

    if (arvoreEstaVazia(t)){
        printf("\n\nÁrvore vazia!\n\n");
    }else{
        printf("\n\nÁrvore não está vazia!\n\n");
    }
    
    if (estaNaArvore(t, 15)){
        printf("\n\nO elemento 15 pertence a árvore\n\n");
    }else{
        printf("\n\nO elemento 15 não pertence a árvore!\n\n");
    }

    if (estaNaArvore(t, 22)){
        printf("\n\nO elemento 22 pertence a árvore\n\n");
    }else{
        printf("\n\nO elemento 22 não pertence a árvore!\n\n");
    }
    free(t);

    return 0;
}