#include <stdio.h>

struct datos { 
    char nombre[50];
    char boleta[50];
    int edad;
    char genero;
};

int main() {

    struct datos alumno; // Variable de tipo "Estruct datos"
    struct datos *palumno; // Variable de tipo apuntador "Estruct datos"
    palumno=&alumno; // Se le asigna la direccion de memoria de la estructura alumno
    
    
    
    printf("\nInserta el nombre del alumno: ");
    fgets(palumno->nombre, sizeof(palumno->nombre), stdin); 
    alumno.nombre[strcspn(palumno->nombre, "\n")] = 0; // Eliminamos el salto de línea de fgets

    printf("Inserta la boleta del alumno: ");
    fgets(palumno->boleta, sizeof(palumno->boleta), stdin);
    alumno.boleta[strcspn(palumno->boleta, "\n")] = 0; 

    printf("Inserta la edad del alumno: ");
    scanf("%d", &palumno->edad);
    getchar(); // Limpiar el salto de línea residual

    printf("Inserta el género del alumno (F/M): ");
    scanf("%c", &palumno->genero);
    getchar(); 

    // Mostrar los datos ingresados
    printf("\nLos datos insertados son:\n");

    printf("\nEl nombre es: %s", palumno->nombre);
    printf("\nSu boleta es: %s", palumno->boleta);
    printf("\nSu edad es: %d", palumno->edad);
    printf("\nEl género es: %c\n", palumno->genero);

    return 0;
}
