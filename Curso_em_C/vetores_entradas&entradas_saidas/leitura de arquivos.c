#include <stdio.h>

int main(){
    FILE    *arq;
    char c;

    arq = fopen("arquivo.txt", "r");

    if (arq){
        while ((c = getc(arq)) !=EOF){ //EOF =  end of file  
            printf("%c", c);
        }
        
    }else{
        printf("Não achei o arquivo\n\n");
    }

    return 0;

}