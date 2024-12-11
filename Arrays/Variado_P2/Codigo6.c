// Programa 6: Contar palabras en una cadena
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int palabras = 0;

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (int i = 0; i < strlen(cadena); i++) {
        if (cadena[i] == ' ') {
            palabras++;
        }
    }

    printf("La cadena contiene %d palabras.\n", palabras + 1);
    return 0;
}