#include<stdio.h>
 
int main(){
    //Variaveis
    int num1,num2;
    
    //Entradas
    printf("digite um número: ");
    scanf("%d",&num1);
    
    printf("digite um número: ");
    scanf("%d",&num2);

    //Processamento
    if (num1 > num2){
        printf("O %d é o maior\n\n", num1);
    }else{
        printf("O %d é o maior\n\n", num2);
    }
}