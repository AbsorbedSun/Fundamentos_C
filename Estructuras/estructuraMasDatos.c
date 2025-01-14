#include <stdio.h>

struct datos { 
    char nombre[50];
    char boleta[50];
    int edad;
    char genero;
};

int main() {

    struct datos alumno[10]; 
    int num;
    printf("¿Cuántos alumnos quieres almacenar? (máximo 10): ");
    scanf("%d", &num); 
    getchar(); // Limpiar el salto de línea residual de scanf

    // Validamos que el número de alumnos no exceda el límite
    if (num > 10) {
        printf("El número máximo de alumnos es 10.\n");
        return 1; // Salimos si el número es mayor a 10
    }

    // Ingreso de datos
    for (int i = 0; i < num; i++) { 
        printf("\nInserta el nombre del alumno: ");
        fgets(alumno[i].nombre, sizeof(alumno[i].nombre), stdin); // Usamos fgets en lugar de gets
        alumno[i].nombre[strcspn(alumno[i].nombre, "\n")] = 0; // Eliminamos el salto de línea de fgets

        printf("Inserta la boleta del alumno: ");
        fgets(alumno[i].boleta, sizeof(alumno[i].boleta), stdin);
        alumno[i].boleta[strcspn(alumno[i].boleta, "\n")] = 0; 

        printf("Inserta la edad del alumno: ");
        scanf("%d", &alumno[i].edad);
        getchar(); // Limpiar el salto de línea residual

        printf("Inserta el género del alumno (F/M): ");
        scanf("%c", &alumno[i].genero);
        getchar(); 
    }

    // Mostrar los datos ingresados
    printf("\nLos datos insertados son:\n");
    for (int i = 0; i < num; i++) {
        printf("\nEl nombre es: %s", alumno[i].nombre);
        printf("\nSu boleta es: %s", alumno[i].boleta);
        printf("\nSu edad es: %d", alumno[i].edad);
        printf("\nEl género es: %c\n", alumno[i].genero);
    }

    return 0;
}
