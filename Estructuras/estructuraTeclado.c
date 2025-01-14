#include <stdio.h>

struct datos{ // Se declara la estructura
        char nombre[50];
        char boleta[50];
        int edad;
        char genero;
};


int main() {

    struct datos alumno;

    printf("\nInserta tu nombre: ");
    gets(alumno.nombre);
    printf("\nInserta tu boleta: ");
    gets(alumno.boleta);
    printf("\nInserta tu  edad: ");
    scanf("%i", &alumno.edad);
    printf("\nInserta tu  genero: (F/M)");
    scanf("%c", &alumno.genero);

    //fflush(stdin); Limpia el buffer de entrada para evitar espacios o saltos de linea almacenados
    
    printf("\nSu nombre es:");
    puts(alumno.nombre);
    printf("\nSu boleta es: %s", alumno.boleta);
    printf("\nSu edad es: %d", alumno.edad);
    printf("\nSu genero es: %c", alumno.genero);

    return 0;
}
