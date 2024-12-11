// Programa 1: Contar una letra especifica en una cadena
#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    char letra = 'a';
    int contador = 0;

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (int i = 0; i < strlen(cadena); i++) {
        if (cadena[i] == letra) {
            contador++;
        }
    }

    printf("La letra '%c' aparece %d veces.\n", letra, contador);
    return 0;
}