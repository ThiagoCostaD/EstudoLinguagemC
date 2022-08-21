#include <stdio.h>
#include <ctype.h>

int main(){
    //Variaveis 
    float altura, peso_ideal;
    char sexo;

    //Entradas
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    gets(stdin); //Correção de bugs
    printf("Informe o sexo m/f: ");
    scanf("%c", &sexo);

    //Processamento
    if(tolower(sexo) == 'm'){
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f", peso_ideal);
    }
    if(tolower(sexo) == 'f'){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é %.2f", peso_ideal);
    }
    if(tolower(sexo) != 'm' && sexo !='f'){
        printf("Sexo não reconhecido. \n");
    }
}