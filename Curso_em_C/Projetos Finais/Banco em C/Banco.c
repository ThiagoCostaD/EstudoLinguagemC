#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

typedef struct {
    int codico;
    char nome[50];
    char email[50];
    char cpf [20];
    char dataNascimento[20];
    char dataCadastro[20];
}Cliente;

typedef struct {
    int numero;
    Cliente Cliente;
    float saldo;
    float limite;
    float saldoTotal;
}Conta;


void menu();
void infoCliente(Cliente cliente);
void infoConta(Conta conta);
void criarConta();
void efeturarSaque();
void efetuarDeposito();
void efetuarTransferencia();
void listarContas();
float atualizarSaldoTotal(Conta conta);
Conta buscafrContaPorNumero(int numero);
void sacar(Conta conta, float valor);
void depositar(Conta conta, float valor);
void transferir(Conta contaOrigem, Conta contaDestino, float valor);

static Conta contas[50];
static int contadorContas = 0;
static int contadorClientes = 0;

int main(){
    menu();

    return 0;
}

void menu(){
    int opcao = 0;
    printf("=================================================");
    printf("===================== ATM =======================");
    printf("=================== Geek Bank ===================");

    printf("Selecione um opção no menu\n");
    printf("1 - Criar conta\n");
    printf("2 - Efetuar saque\n");
    printf("3 - Efetuar depósito\n");
    printf("4 - Efetuar trnasferência\n");
    printf("5 - Listar contas\n");
    printf("6 - Sair\n");

    scanf("%d", &opcao);
    getchar();

    switch (opcao){
    case 1:
        criarConta();
        break;
    case 2:
        efeturarSaque();
        break;
    case 3:
        efetuarDeposito();
        break;
    case 4:
        efetuarTransferencia();
        break;
    case 5:
        listarContas();
        break;
    case 6:
        printf("Até a próxima\n");
        sleep(3);
        exit(0);
    default:
        printf("Opção inválioda\n");
        sleep(3);
        menu();
        break;
    }
}

void infoCliente(Cliente cliente){
    printf("Código: %d\nNome: %s\ndata de nascimento: %s\nCadastro: %s",
    cliente.codico, strtok(cliente.nome, "\n"), strtok(cliente.dataNascimento,  "\n"),
    strtok(cliente.dataCadastro, "\n"));
}

void infoConta(Conta conta){
    printf("Numero da conta: %d\nCliente: %s\nData Nascimento: %s\nData Cadastro: %s\nSaldo Total: %.2f\n".
    conta.numero, strtok(conta.Cliente.nome, "\n"), strtok(conta.Cliente.dataNascimento, "\n"), 
    strtok(conta.Cliente.dataCadastro, "\n"), conta.saldoTotal);
}

void criarConta(){
    Cliente cliente;

    char dia[3];
    char mes[3];
    char ano[5];
    char dataCadastro[20];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    if (tm.tm_mday<10){
        sprintf(dia, "0%d", tm.tm_mday);
    }else{
        sprintf(dia, "%d", tm.tm_mday);
    }
    if ((tm.tm_mon +1) <10){
        sprintf(mes, "0%d", tm.tm_mon +1);
    }else{
        sprintf(mes, "%d", tm.tm_mon +1);
    }
    sprint(ano, "%d", tm.tm_year +1900);

    strcpy(dataCadastro, "");
    strcat(dataCadastro, dia);
    strcat(dataCadastro, "/");
    strcat(dataCadastro, mes);
    strcat(dataCadastro, "/");
    strcat(dataCadastro, ano);
    strcat(dataCadastro "\0");
    strcpy(cliente.dataCadastro, dataCadastro);
    
    printf("Informe os dados do cliente: \n");
    cliente.codico = contadorClientes +1;
    
    printf("Nome do cliente: \n");
    fgets(cliente.nome, 50, stdin);

    printf("E-mail do cliente: \n");
    fgets(cliente.email, 50, stdin);

    printf("CPF do cliente: \n");
    fgets(cliente.cpf, 20, stdin);

    printf("Data de nascimento do cliente: \n");
    fgets(cliente.dataNascimento, 20, stdin);

    contadorClientes++;

    contas[contadorContas].numero = contadorContas +1;
    contas[contadorContas].cliente = cliente;
    contas[contadorContas].saldo = 0.0;
    contas[contadorContas].limite = 0.0;
    contas[contadorContas].saldoTotal = atualizarSaldoTotal(contas[contadorContas]);

    printf("Conta criada com sucesso.\n");
    printf("\n");
    printf("Dados da conta criada: \n");
    printf("\n");
    infoConta(contas[contadorContas]);
    contadorContas++;

    sleep(4);
    menu();

}


float atualizarSaldoTotal(Conta conta){
    return conta.saldo + conta.limite;
}

Conta buscafrContaPorNumero(int numero){
    Conta c;
    if(contadorContas > 0){
        for (int i = 0; i < contadorContas; i++){
            if (contas[i].numero == numero){
                c = contas[i];
            }
        }
    }
    return c; 
}

void sacar(Conta conta, float valor){
    if (valor > 0 && conta.saldoTotal >= valor){
        for (int i = 0; i < contadorContas; i++){
            if(conta[i].numero == conta.numero){
                if (conta[i].saldo.numero){
                    conta[i].saldo = conta[i].saldo - valor;
                    conta[i].saldoTotal = atualizarSaldoTotal(contas[i]);
                    printf("saque efetuado com sucesso\n"); 
                }else{
                    float restante = contas[i].saldo - valor;
                    conta[i].limite = contas[i].limite+restante;
                    conta[i].saldo = 0.0;
                    conta[i].saldoTotal = atualizarSaldoTotal(conta[i]);
                     printf("saque efetuado com sucesso.\n"); 
                }
            }
        }  
    }else{
        printf("Saque não realizado. Tente novamente.\n");
    }
    
}

void depositar(Conta conta, float valor){
    if (valor > 0){
        for (int i = 0; i < contadorContas; i++){
            if (contas[i].numero == contas.numero){
                contas[i].saldo = contas[i].saldo + valor;
                cantas[i].saldoTotal = atualizarSaldoTotal(contas[i]);
                printf("Depósito efetuado com sucesso.\n");
            }
        }
    }else{
        printf("Erro ao efetuar depósito. Tente novamente");
    }
}

void transferir(Conta contaOrigem, Conta contaDestino, float valor){
    if(valor > 0 && contaOrigem.saldoTotal >= valor){
        for (int co = 0; co < contadorContas; co++){
            if (contas[co].numero == contaOrigem.numero){
                for (int cd = 0; cd < contadorContas; cd++){
                    if(conta[cd].numero == contaDestino.numero){
                        if (conta[co].saldo >= valor){
                            conta[co].saldo = conta[co].saldo - valor;
                            conta[cd].saldo = conta[cd].saldo + valor;
                            conta[co].saldoTotal = atualizarSaldoTotal(conta[co]);
                            conta[cd].saldoTotal = atualizarSaldoTotal(conta[cd]);
                            printf("Transferencia realizada com sucesso.\n");
                        }else{
                            float restante = conta[co].saldo - valor;
                            conta[co].limite = conta[co].limite + restante;
                            conta[co].saldo =0.0;
                            conta[cd].saldo = conta[cd].saldo + valor;
                            conta[co].saldoTotal = atualizarSaldoTotal(conta[co]);
                            conta[cd].saldoTotal = atualizarSaldoTotal(conta[cd]);
                            printf("Transferencia realizada com sucesso.\n");
                        }
                        
                    }
                }
                
            }
            
        }
        
    }else{
        printf("Transferencia não realizada.");
    }
}

void efetuarSaque(){
    if(contadorContas>0){
        int numero;
        printf("informer o numero da conta: \n");
        sacnf("%d", &numero);

        Conta conta = buscafrContaPorNumero(numero);

        if (conta.numero == numero){
            float valor;
            printf("Informe o valor do saque: \n");
            scanf("%f", &valor);
            sacar(conta, valor);
            
        }else{
            printf("Não foi encontrada uma conta com o numero %d\n", numero);
        }
        
    }else{
        printf("Ainda não exitem contas para saques. \n");
    }
    sleep(2);
    menu();
}

void efetuarDeposito(){
    if(contadorContas>0){
        int numero;
        printf("informer o numero da conta: \n");
        sacnf("%d", &numero);

        Conta conta = buscafrContaPorNumero(numero);

        if (conta.numero == numero){
            float valor;
            printf("Informe o valor do deposito: \n");
            scanf("%f", &valor);

            depositar(conta, valor);
            
        }else{
            printf("Não foi encontrada uma conta com o numero %d\n", numero);
        }
        
    }else{
        printf("Ainda não exitem contas para deposito. \n");
    }
    sleep(2);
    menu();
}

void efetuarTransferencia(){
    if(contadorContas>0){
        int numero_o, numero_d;
        printf("informer o numero da sua conta: \n");
        sacnf("%d", &numero_o);

        Conta conta_o = buscafrContaPorNumero(numero_o);

        if (conta_o.numero == numero_o){
            
            printf("Informe a conta de destino: \n");
            scanf("%d", &numero_d);
            Conta conta_d = buscafrContaPorNumero(numero_d);

            if (conta_d.numero ==numero_d){
               float valor;
                printf("Informe o valor de transferencia: \n");
                scanf("%f", &valor);

            transferir(conta_o, conta_o, valor);
            }
            
            
        }else{
            printf("Não foi encontrada uma conta com o numero %d\n", numero);
        }
        
    }else{
        printf("Ainda não exitem contas para transferencia. \n");
    }
    sleep(2);
    menu();
}

void listarContas(){
    if (contadorContas > 0){
        for (int i = 0; i < contadorContas; i++){
            infoConta(contas[i]);
            printf("\n");
            sleep(2);
        }    
    }else{
        printf("Aind não existe conta cadastradas.\n");
    }
    sleep(4);
    menu();
}