#include <stdio.h>

int main(){
    //Variáveis
    int c;
    float n, e = 0, salario, valor_hora = 10.00;

    //Entradas
    printf("Informe o código: ");
    scanf("%d", &c);
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%f", &n);

    //Processamento
    if(n > 50){
        e = (n - 50) * 20.00;
        salario = (50 * valor_hora) + e;
        //Saidas
        printf("Salário total R$ %.2f\n", salario);
        printf("salario excedente R$ %.2f", e);
    }else{
        salario = n * valor_hora;
        //Saidas
        printf("Salário total R$ %.2f\n", salario);
        printf("Salário excedente R$ %.2f", e);
    }
}