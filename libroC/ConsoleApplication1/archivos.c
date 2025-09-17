#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

extern int errno;

int main(){

    FILE *ptr=NULL;
    errno=0;
    char c;
    ptr=fopen("prueba.txt", "r");
    if (ptr==NULL){

       // perror("que fallo macho ");
       fprintf(stderr, "\n%d  %s", errno, strerror(errno));
        exit(EXIT_FAILURE);
    }
    else {
        puts("Archivo listo para leer");
        while ((c=fgetc(ptr))!=EOF)
            printf("%c",c);
    }



    fclose(ptr);
    return 0;
}

