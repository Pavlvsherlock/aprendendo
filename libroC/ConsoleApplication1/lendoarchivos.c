#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*Declaramos as nosas funcions*/
void lercaracter(FILE *archivo); //esta lee caracter a caracter nun ficheiro
void lerpalabra(FILE *archivo);  //esta lee palabras enteiras nun ficheiro



int main(){

    FILE *archivoler=fopen("paler.md", "r");

    //chamamos as funcións de leer pasandolle o punteiro FILE
    lercaracter(archivoler);
    lerpalabra(archivoler);

    fclose(archivoler);//cerramos o archivo

    return 0;
}

void lercaracter(FILE *archivo){
    int letrita;
    printf("Estamos dentro de lercaracter\n");
    
    do{
    
    letrita=fgetc(archivo);
    if (!feof(archivo));
    printf("%c",letrita);
    }while (letrita!=EOF);
}
void lerpalabra(FILE *archivo){
    printf("\nEstamos dentro de lerpalabra\n");
    rewind(archivo); //recoloca o curso ao inicio do ficheiro
    char palabrojas[200];
   while(!feof(archivo)) {
    fgets(palabrojas,200, archivo);
   
    printf("%s", palabrojas);
    }
    

}