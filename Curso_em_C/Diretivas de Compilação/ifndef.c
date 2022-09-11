#include <stdio.h>
#ifndef PI
    #define PI 3.14567; //constante
//ifndef = diretiva de compilação
#endif 

int main(){
    int valor =  5;
    
    valor = 467;

    printf("O valor é %d\n", valor);

    printf("PI vale %f\n", (2 * PI));

    return 0;
}