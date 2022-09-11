#include <stdio.h>

//Enum -> enumeração

enum dias_da_semana{
    segunda,
    terça, 
    quarta, 
    quinta,
    sexta, 
    sábado,
    domingo
};

int main(){
    enum dias_da_semana d1, d2;

    d1 = quinta;
    d2 = 4;

    if (d1 == d2){
        printf("Os dias são iguais..\n\n");
    }else{
        printf("Os dias não são igaus\n\n");
    }
    

    return 0;
}