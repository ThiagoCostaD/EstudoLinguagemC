#include <stdio.h>

int main(){
    /*
    [00][01][02]
    [10][11][12]
    
    */
    //Matriz de inteiros
    int numeros [2][3];
    numeros[0][0]= 1;
    numeros[0][1]= 2;
    numeros[0][2]= 3;
    numeros[1][0]= 4;
    numeros[1][1]= 5;
    numeros[1][2]= 6;

    for (int i = 0;  i < 2; i++){
        for (int j = 0; j < 3; j++){
                printf("%d\n", numeros[i][j]);
            }
        }
}