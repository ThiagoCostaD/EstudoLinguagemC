#include <stdio.h>

int main(){

    int valores[5];

    for (int i = 0; i < 5; i++){
        printf("informe o %d/5 valor: ", (i+1));
        scanf("%d", &valores[i]);
    }
        printf("Os valores informados foram: \n");
        for (int i = 0; i < 5; i++){
        printf("%d\n", valores[i]);
        }

        printf("%p %d\n", &valores[0], valores[0]);
        printf("%p %d\n\n", valores, valores[0]);

        printf("%p %d\n", &valores[1], valores[1]);
        printf("%p %d\n\n", valores, valores[1]);


        printf("%p %d\n", &valores[2], valores[2]);
        printf("%p %d\n\n", valores, valores[2]);


        printf("%p %d\n", &valores[3], valores[3]);
        printf("%p %d\n\n", valores, valores[3]);


        printf("%p %d\n", &valores[4], valores[4]);
        printf("%p %d\n\n", valores, valores[4]);
    return 0;
}