#include <stdio.h>
#include <string.h>

int main(void){
    char frase[]="ESCRITO EN MAYUSCULAS PARA PASAR A MINUSCULAS";
    

    int i=0;
    int valor=0;
    while (frase[i] != '\0'){
        valor =frase[i];
        if (valor>=65 && valor<=90){
           frase[i]+= 32;
            printf("%c",frase[i]);
        }
        else printf("%c",frase[i]);
        i ++;

    }

    return 0;
}