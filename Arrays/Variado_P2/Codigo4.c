// Programa 4: Identificar letras mayúsculas
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[100];

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("Las letras mayúsculas son: ");
    for (int i = 0; i < strlen(cadena); i++) {
        if (isupper(cadena[i])) {
            printf("%c ", cadena[i]);
        }
    }
    printf("\n");
    return 0;
}