#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dificuldade;
    int valor1;
    int valor2;
    int operacao;
    int resultado;
}Calcular;

void jogar();
void mostrarInfo(Calcular calc);
int somar(int resposta, Calcular calc);
int diminuir(int resposta, Calcular calc);
int multiplicar(int resposta, Calcular calc);

int pontos = 0;

int main(){
    //deve ser chamado apena uma vez.
    srand(time(NULL));
    jogar();
    return 0;
}

void jogar(){
    Calcular calc;
    int dificuldade;

    printf("Informe o nível de dificuldade desejado[1, 2, 3 ou 4]:\n");
    scanf("%d", &dificuldade);
    calc.dificuldade = dificuldade;

    calc.operacao = rand() % 3;

    if(calc.dificuldade == 1){
        //facil
        calc.valor1 = rand()%11;
        calc.valor2 = rand()%11;
    }else if(calc.dificuldade == 2){
        //medio
        calc.valor1 = rand()%101;
        calc.valor2 = rand()%101;
    }else if(calc.dificuldade == 3){
        //dificil
        calc.valor1 = rand()%1001;
        calc.valor2 = rand()%1001;
    }else if(calc.dificuldade == 4){
        //insano
        calc.valor1 = rand()%10001;
        calc.valor2 = rand()%10001;
    }else{
        //ultra
        calc.valor1 = rand()%100001;
        calc.valor2 = rand()%100001;
    }

    int resposta;
    printf("Informe o resultado para a seguinte operação: \n");

    //somar
    if (calc.operacao == 0){
        printf("%d + %d\n", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if (somar(resposta, calc)){
            pontos += 1;
            printf("Você tem %d ponto(s).\n", pontos);
        }
    }//diminuir
    else if (calc.operacao == 1){
        printf("%d - %d\n", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if (diminuir(resposta, calc)){
            pontos += 1;
            printf("Você tem %d ponto(s).\n", pontos);
        }
    }//multiplicar
    else if (calc.operacao == 2){
        printf("%d * %d\n", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if (multiplicar(resposta, calc)){
            pontos += 1;
            printf("Você tem %d ponto(s).\n", pontos);
        }
    }//desconhecida
    else{
        printf("Operação não é reconhecida");
    }

    // recomecar o jogo?
    printf("Deseja continuar jogando? [1 - sim, 0 - não]\n1");
    int continuar;
    scanf("%d", &continuar);

    if (continuar){
        jogar();
    }else{
        printf("você finalizou com %d ponto(s).", pontos);
        printf("Até a próxima.");
        exit(0);
    }
    
}

void mostrarInfo(Calcular calc){
    char op[25];
    if (calc.operacao ==0)
    {
        sprintf(op, "somar");
    }else if(calc.operacao == 1){
        sprintf(op, "diminuir");
    }else if(calc.operacao == 2){
        sprintf(op, "multiplicar");
    }else{
        sprintf(op, "operação desconhecida");
    }
    printf("valor 1: %d\nvalor2: \nDificuldade: %d \nOperação: %s",
            calc.valor1, calc.valor2, calc.dificuldade, op);
   }

int somar(int resposta, Calcular calc){
    int resultado = calc.valor1 + calc.valor2;
    calc.resultado = resultado;
    int certo = 0;

    if (resposta == calc.resultado){
        printf("Resposta correta!\n");
        certo = 1;
    }else{
        printf("Resposta errada!\n");
    }
    printf("%d + %d = %d\n", calc.valor1, calc.valor2, calc.resultado);
    return certo;
}

int diminuir(int resposta, Calcular calc){
    int resultado = calc.valor1 - calc.valor2;
    calc.resultado = resultado;
    int certo = 0;

    if (resposta == calc.resultado){
        printf("Resposta correta!\n");
        certo = 1;
    }else{
        printf("Resposta errada!\n");
    }
    printf("%d - %d = %d\n", calc.valor1, calc.valor2, calc.resultado);
    return certo;
}

int multiplicar(int resposta, Calcular calc){
    int resultado = calc.valor1 * calc.valor2;
    calc.resultado = resultado;
    int certo = 0;

    if (resposta == calc.resultado){
        printf("Resposta correta!\n");
        certo = 1;
    }else{
        printf("Resposta errada!\n");
    }
    printf("%d * %d = %d\n", calc.valor1, calc.valor2, calc.resultado);
    return certo;
}