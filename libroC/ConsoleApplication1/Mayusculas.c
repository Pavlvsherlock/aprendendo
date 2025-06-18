//Progarama que pasa a mayusculas texto escrito en minusculas.
#include <stdio.h>
#include <string.h>

int main(void){
    char frase[]="escrito en minusculas para PASAR a mayusculas";
    

    int i=0;
    int valor=0;
    while (frase[i] != '\0'){
        valor =frase[i];
        if (valor>=97 && valor<=122){
           frase[i]-= 32;
            printf("%c",frase[i]);
        }
        else printf("%c",frase[i]);
        i ++;

    }

    return 0;
}
