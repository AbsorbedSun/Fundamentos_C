// Programa 2: Verificar la existencia de un caracter
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char cadena[100];
    char letra = 'e';
    bool encontrado = true;

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (int i = 0; i < strlen(cadena); i++) {
        if (cadena[i] == letra) {
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        printf("La letra '%c' no está presente en la cadena.\n", letra);
    } else {
        printf("La letra '%c' está presente en la cadena.\n", letra);
    }
    return 0;
}