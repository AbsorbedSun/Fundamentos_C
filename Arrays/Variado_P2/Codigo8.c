// Programa 8: Concatenar cadenas
#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[50], cadena2[50], resultado[100];

    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);

    cadena1[strcspn(cadena1, "\n")] = '\0'; // Eliminar salto de línea

    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    
    cadena2[strcspn(cadena2, "\n")] = '\0'; // Eliminar salto de línea

    strcpy(resultado, cadena1);
    strcat(resultado, " ");
    strcat(resultado, cadena2);

    printf("Cadena concatenada: %s\n", resultado);
    return 0;
}