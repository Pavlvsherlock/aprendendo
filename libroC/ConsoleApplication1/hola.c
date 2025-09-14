
#include <stdio.h>
#include <string.h>

typedef struct 
{
    int edad;
    float altura;
    char nombre[20];
}Datos;

typedef struct 
{
    char titulo[40];
    char autor[40];
    int paginas;
    float precio;   
}Libros;





int main()
{
    Datos p1;
    printf("Buenos dias, como te chamas? ");
    scanf("%s", &p1.nombre);
    printf("edad? ");
    scanf("%d",&p1.edad);
    printf("Canto mides? ");
    scanf("%f", &p1.altura);
    printf("Hola %s tes %d anos e mides %.2f metros",p1.nombre, p1.edad, p1.altura);

    //instancia de Libros
   /* Libros l1;
   strcpy(l1.titulo, "El señor de los anillos");
    strcpy(l1.autor, "J.R.R Tolkien");
    l1.paginas=957;
    l1.precio=52.99;
    */
    Libros l1={"the lord of the rings", "tolkien", 50, 25};
    //imprimimos datos do libro
    printf("\nfalamos do libro %s, escrito por %s. %s ten %d paginas e costa %.2f euros", l1.titulo, l1.autor, l1.titulo, l1.paginas, l1.precio);
    return 0;

}

