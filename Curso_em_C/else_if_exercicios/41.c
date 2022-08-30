#include <stdio.h>

int main(){
    //Variaveis
    float peso, altura, imc;

    //Entradas
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    //Processamento
    imc = peso / (altura * altura);
    if (imc < 18.5){
        printf("Abaixo do peso")
    }else{
        
    }
    
    }