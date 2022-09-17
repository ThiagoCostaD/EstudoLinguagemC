#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Conversão de string
atof() converte uma string para double
    int main(){
        char valor_s[5];
        double valor_d;

        strcpy(valor_s, "4.5");
        
        valor_d = atof(valor_s);

        printf("O valor é %.2f\n\n", valor_d);
    

atoi() converte uma string para inteiro
int main(){
    char valor_s[5];
    int valor_i;

    strcpy(valor_s, "4.5");
    
    valor_i = atoi(valor_s);

    printf("O valor é %d\n\n", valor_i);


atol() converte string para inteiro longo
int main(){
    char valor_s[5000];
    double valor_li;

    strcpy(valor_s, "456789231231456");
    
    valor_li = atol(valor_s);

    printf("O valor é %lf\n\n", valor_li);
 */   
   
/*Gerenciador de sequência pseudo-aleatório

//rand() gera numero aleatorio
//srand() inicializa o gerador de numeros aleatorios
int main(){
    //time_t t;
  //Inicializar o gerador
    srand((unsigned) time(&t));

    //gera 6 números entre 0 e 60
    for (int i = 0; i < 6; i++){
        printf("%d\n", rand() %61);
    }
    
*/
   
/*Gerenciamento de memória dinânmica   

malloc()  
callod()
free()
realoc()   

*/   
   
/* Pesquisa e Ordenação
qsort()


int compara(int *x, int *y);
    if (*x > *y){
        return 1;
    }else if (*x == *y){
        return 0;
    }else{
        return -1;
    }
    
    

int main(){
    int numeros[] = {6,2,9,3,7,1,5}; 

    qsort(numeros, 7, sizeof(int), (void *)compara);

    for (int i = 0; i < 7; i++){
        printf("%d\n", numeros[i]);
    }
    */

/*aritmética de inteiros
abs() valor absoluto
div()
*/
}