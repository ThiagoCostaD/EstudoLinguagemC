

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