#include <stdio.h>

int main() {
    // Declaración de variables
    int a = 10, b = 20, c = 30;
    int *p1, *p2, *p3;

    // Asignación de direcciones a los punteros
    p1 = &a;
    p2 = &b;
    p3 = &c;

    // Operaciones aritméticas usando punteros
    int suma = *p1 + *p2 + *p3;
    int resta = *p1 - *p2 - *p3;
    int multiplicacion = (*p1) * (*p2) * (*p3);
    int division = *p2 / *p1; // División entre b y a

    // Imprimir resultados de las operaciones
    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicación: %d\n", multiplicacion);
    printf("División: %d\n", division);

    // Arreglo y puntero
    int arreglo[5] = {1, 2, 3, 4, 5};
    int *parreglo = arreglo; // El puntero apunta al inicio del arreglo

    // Imprimir elementos del arreglo usando puntero
    printf("Elementos del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(parreglo + i));
    }
    printf("\n");

    // Modificar los elementos del arreglo usando puntero
    for (int i = 0; i < 5; i++) {
        *(parreglo + i) += 10;
    }

    // Imprimir elementos modificados del arreglo
    printf("Elementos modificados del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(parreglo + i));
    }
    printf("\n");

    return 0;
}
