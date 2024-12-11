// Programa 7: Buscar un carácter en una cadena
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char cadena[100], letra, ubicacion;
    bool bandera;

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("Ingrese el carácter a buscar: ");
    scanf(" %c", &letra);

    for (int i = 0; i < strlen(cadena); i++) {
        if (cadena[i] == letra) {
            bandera = true;
            ubicacion = i;
            break;
        }
    }

    if (!bandera) {
        printf("La letra '%c' no aparece en la cadena.\n", letra);
    } else {
        printf("La letra '%c' aparece por primera vez en la posición %d.\n", letra, ubicacion);
    }
    return 0;
}
