/*
Obs: para utilizar a biblioteca math:

a- clicar com o botão direito do mouse no projeto C
b- It em c/c++ Build -> settings -> libraries
c- clicar no + e add 'm'
d- aplica e fecha
*/

/* Funções trigonometricas

cos()
*/

#include <stdio.h>
#include <math.h>

int main(){
    int angulo = 45;
    float res = cos(angulo);

    printf("O coseno de %d é %f\n\n", angulo, res);
}