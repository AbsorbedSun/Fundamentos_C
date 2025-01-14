#include <stdio.h>

struct datos{ // Se declara la estructura
        char nombre[50];
        char boleta[50];
        int edad;
        char genero;
} alumno={"Myriam", "9010", 42, 'F'}; // Se definen e inicializan variables de la estructura


int main() {

    printf("\nLos datos insertados son.\n");

    printf("\nSu nombre es: %s", alumno.nombre);
    printf("\nSu boleta es: %s", alumno.boleta);
    printf("\nSu edad es: %d", alumno.edad);
    printf("\nSu genero es: %c", alumno.genero);

    struct datos alumno;
    printf("sizeOf (datos): %d \n", sizeof(alumno));
    
    return 0;
}
