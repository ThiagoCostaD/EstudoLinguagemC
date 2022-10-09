#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct{
    int codigo;
    char nome[30];
    float preco;
}Produto;

typedef struct {
    Produto produto;
    int quantidade;
}Carrinho;

void infoProduto(Produto prod);
void menu();
void cadastrarProdutos();
void listarProdutos();
void comprarProduto();
void visualizarCarrinho();
Produto pegarProdutoPorCodigo(int codigo);
int * temNoCarrinho(int codigo);
void fecharPedido();

static int contador_produto = 0;
static int contador_carrinho = 0;
static Carrinho carrinho[50];
static Produto produto;



int main(){

    return 0;
}

void infoProduto(Produto prod){
    printf("Código: %d\nNome: %s \nPreço: %.2f\n", prod.codigo, strtok(prod.nome, "\n"), prod.preco);
}

void menu(){
    printf("==========================================\n");
    printf("=============== Bem Vindo(a)==============\n");
    printf("===============  Geek Shop ===============\n");
    printf("==========================================\n");

    printf("Selecione uma opção abaixo: \n");
    printf("1 - Cadastrar produto \n");
    printf("2 - Listar produtos \n");
    printf("3 - Compra produtos\n");
    printf("4 - Visualizar carrinho\n");
    printf("5 - Fechar carrinho\n");
    printf("6 - Sair do sistema\n");

    int opcao;
    scanf("%d", &opcao);
    getchar();

    switch (opcao){
        case 1:
            cadastrarProdutos();
            break;
        case 2:
            listarProdutos();
        case 3:
            comprarProduto();
        case 4:
            visualizarCarrinho();
        case 5:
            fecharPedido();
        case 6:
            printf("Volte sempre!");
            sleep(2);
            exit(0);  
        default:
            printf("Opção invalida.");
            sleep(2);
            menu();
            break;
    }
}

void cadastrarProdutos(){
    printf("cadastro de produto\n");
    printf("====================\n");

    printf("informe o nome do produto: \n");
    fgets(produto[contador_produto].nome, 30, stdin);

    printf("informe o preço do produto: \n");
    fgets("%f",&produto[contador_produto].preco);    

    printf("O produto foi cadastrado com sucesso\n", strtok(produto[contador_produto].nome, "\n"));

    produto[contador_produto].codigo = (contador_produto + 1);
    contador_produto++;
}

void listarProdutos(){

    if (contador_produto > 0){
        printf("Lista de produtos.\n");
        printf("------------------\n");
        for (int i = 0; i < contador_produto; i++){
            infoProduto(produto[i]);
            printf("------------------\n");
            sleep(1);
        }
        
    }else{
        printf("Ainda não temos produtos cadastrados");
    }
    
}

void comprarProduto(){
    if (contador_produto > 0){
        printf("Informe o código do produto!");

        printf("========== Produtos Disponíveis ==========\n");
        for (int  i = 0; i < contador_produto; i++){
            infoProduto(produto[i]);
            printf("------------------\n");
            sleep(1);
        }
        int codigo;
        scanf("%d", &codigo);
        getchar();

        int tem_mercado = 0;
        for (int i = 0; i < contador_produto; i++){
            if (produto[i].codigo == codigo){
                tem_mercado = 1;

                if (contador_carrinho > 0){
                    int * retorno = temNoCarrinho(codigo);

                    if(retorno[0] == 1){
                        carrinho[retorno[1]].quantidade++;
                        print("Aumentei a quantidade do produto %s que já estava no carrinho.\n",
                        strtok(carrinho[retorno[1]].produto.nome, "\n"));
                        sleep(2);
                        menu();
                    }else{
                        Produto p = pegarProdutoPorCodigo(codigo);
                        carrinho[contador_carrinho].produto = p;
                        carrinho[contador_carrinho].quantidade = 1;
                        printf("O produto %s foi adicionado ao carrinho.\n", strtok(p.nome, "\n"));
                        sleep(2);
                        menu();
                    }
                }else{
                     Produto p = pegarProdutoPorCodigo(codigo);
                        carrinho[contador_carrinho].produto = p;
                        carrinho[contador_carrinho].quantidade = 1;
                        contador_carrinho++;
                        printf("O produto %s foi adicionado ao carrinho.\n", strtok(p.nome, "\n"));                
                        sleep(2);
                        menu();
                       }  
                       
                                     
                 }
        }
        if (tem_mercado < 1){
            printf("Não foi encontrado o produto com esse código %d\n");
            sleep(2);    
            }
        
    }else{
        printf("Ainda não temos produtos para vender");
        sleep(4);
        menu();
    }
    
}

void visualizarCarrinho(){
    if (contador_carrinho > 0){
        printf("Produtos carrinho.\n");
        printf("------------------\n");
        for (int i = 0; i < contador_carrinho; i++){
            infoProduto(carrinho[i]);
            printf("Quantidade: \n", carrinho[i].quantidade);
            printf("------------------\n");
            sleep(1);
        }
        
    }else{
        printf("Ainda não temos produtos no carrinho");
    }
}

Produto pegarProdutoPorCodigo(int codigo){
    Produto p;
    for (int i = 0; i < contador_produto; i++){
        if (produto[i].codigo == codigo){
            p = produto[i];
        }
    }
    return p;    
}

int * temNoCarrinho(int codigo){
    int static retorno[] = {0, 0};
    for (int i = 0; i < contador_carrinho; i++){
        if (carrinho[i].produto.codigo == codigo){
            retorno [0] = 1;
            retorno [1] = i;
        }        
    }
    return retorno;
    
}
void fecharPedido(){
    if (contador_carrinho > 0){
        float valorTotal = 0.0;
        printf("Produtos do carrinho: \n");
        printf("----------------------\n");
        for (int i = 0; i < contador_carrinho; i++){
            Produto p = carrinho[i].produto;
            int quantidade = carrinho[i].quantidade;
            valorTotal += p.preco * quantidade;
            printf("Quantidade: %d\n", quantidade);
            printf("----------------------\n");
            sleep(1);
        }
        printf("Sua fatura é R$ %.2f\n", valorTotal);

        contador_carrinho = 0;
        printf("Obrigado pela preferência.\n");
        sleep(5);
        menu();
    }else{
        printf("Você não tem nenhum produto no carrinho");
        sleep(3);
        menu();
    }    
}