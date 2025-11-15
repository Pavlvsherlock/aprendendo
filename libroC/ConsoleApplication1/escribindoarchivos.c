#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

struct Persona{
    int edad;
    float altura;
};

int main(){
    FILE *archivador=fopen("archivero.bin", "w");
    if (archivador)
        printf("Archivo listo para escribir");
        else
        printf("Error abrindo archivo");

        fputc('h', archivador); 
        fputc('o', archivador); 
        fputc('l', archivador); 
        fputc('a', archivador);    
        fputc('\n', archivador); 
        fputc('t', archivador); 
        fputc('u', archivador); 
        char frase[]={"\nbuenas tardes"};
        struct Persona p1 = {25, 1.86};
        struct Persona p2 = {99, 1.75};
        struct Persona *ptrstru = &p1;
      

       /*fputs devolve un int*/
       int resultado = fputs(frase, archivador);
       if(resultado == EOF){
        printf("\nFallo en algun lado");
       }
       else printf("\nTodo correto");

        FILE *archivobinario = fopen("estructuras.bin", "wb"); 
        fwrite(ptrstru,sizeof(struct Persona), 1, archivobinario);
        fwrite(&p2, sizeof(struct Persona), 1, archivobinario);
    fclose(archivador);
    fclose(archivobinario);
    struct Persona p3;
    struct Persona p4;
    FILE *fp= fopen("estructuras.bin", "rb");

    /*
    aprendemos a funcion fread()*/
    fread(&p3,sizeof(struct Persona),1, fp);
    fread(&p4, sizeof(struct Persona), 1, fp);
    fclose(fp);
    printf("\nA edad do fulano e de %d", p3.edad);
    printf("\nA edad do fulano e de %.2f", p4.altura);
    return 0;

}
        