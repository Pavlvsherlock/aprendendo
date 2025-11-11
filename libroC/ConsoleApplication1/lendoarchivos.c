#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*Declaramos as nosas funcions*/
void lercaracter(FILE *archivo); //esta lee caracter a caracter nun ficheiro
void lerpalabra(FILE *archivo);  //esta lee palabras enteiras nun ficheiro

/*Declaramos a estructura*/
struct Personal{
char nombre[50];
int edad;
float sueldo;
};

int main(){

     //instanciamos as estructuras
     struct Personal p1;
     struct Personal p2;

     //inicializamos as estructuras
     p1.edad=23;
     p1.sueldo=1800.59;
     strcpy( p1.nombre, "pablo");

     p2.edad=41;
     p2.sueldo=1352.94;
     strcpy(p2.nombre, "Socorro");

     //abrimos o fichero o que nos devolve un punteiro tipo FILE
     FILE *ptr_archivo= fopen("archivero.bin","w");
      
     if (ptr_archivo==NULL){

       // perror("que fallo macho ");
       fprintf(stderr, "\n%d  %s", errno, strerror(errno));
        exit(EXIT_FAILURE);
    }
    else printf("Archivo listo para escribir\n");

    FILE *archivoler=fopen("paler.md", "r");

    //chamamos as funcións de leer pasandolle o punteiro FILE
    lercaracter(archivoler);
    lerpalabra(archivoler);
    fclose(archivoler);

     fclose(ptr_archivo);
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
    printf("Estamos dentro de lerpalabra\n");
    rewind(archivo); //recoloca o curso ao inicio do ficheiro
    char palabrojas[200];
   while(!feof(archivo)) {
    fgets(palabrojas,200, archivo);
   
    printf("%s", palabrojas);
    }
    

}