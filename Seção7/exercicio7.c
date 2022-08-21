#include <stdio.h>

int main(){
        //Variáveis
        int contador_total = 0, contador_sit1 = 0, contador_sit2 = 0, 
        contador_sit3 = 0, contador_sit4 = 0, indentificacao, defeito;
    
        //Entradas    
        printf("Informe a identificação: ");
        scanf("%d", &indentificacao);

        while (indentificacao != 0){
        printf("1 - Necessita de esfera.\n");
        printf("2 - Necessita de limpeza.\n");
        printf("3 - Necessita de troca do cabou e/ou conector.\n");
        printf("4 - Quebrado\n");
        printf("Informe o defeito:\n");
        scanf("%d", &defeito);
    
        //Processamento
        if(defeito == 1){
       contador_sit1 = contador_sit1 + 1;
        }
        if(defeito == 2){
           contador_sit2 = contador_sit2 + 1;
        }
        if(defeito == 3){
           contador_sit3 = contador_sit3 + 1;
        }
        if(defeito == 4){
           contador_sit4 = contador_sit4 + 1;
        }
        contador_total = contador_total + 1;
        //Entradas    
        printf("Informe a identificação: ");
        scanf("%d", &indentificacao);
    }
    float p1, p2, p3, p4; //(float) cast
    p1 = ((float)contador_sit1/ (float)contador_total * 100.0);
    p2 = ((float)contador_sit2/ (float)contador_total * 100.0);
    p3 = ((float)contador_sit3/ (float)contador_total * 100.0);
    p4 = ((float)contador_sit4/ (float)contador_total * 100.0);
    
    printf("Quantidade de mouses %d:\n\n", contador_total);
    printf("Situação \t\t\t\t\t\t\tQuantidade \t\t\tPercentual\n");
    printf("1 - Necessita de esfera\t\t\t\t\t\t\t%d \t\t\t%.2f%%\n", contador_sit1, p1);
    printf("2 - Necessita de limpeza\t\t\t\t\t\t%d \t\t\t%.2f%%\n", contador_sit2, p2);
    printf("3 - Necessita de troca do cabou e/ou conector\t\t\t\t%d \t\t\t%.2f%%\n", contador_sit3, p3);
    printf("4 - Quebrado\t\t\t\t\t\t\t\t%d \t\t\t%.2f%%\n", contador_sit4, p4);
}