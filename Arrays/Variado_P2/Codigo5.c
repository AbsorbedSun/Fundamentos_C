// Programa 5: Verificar si una cadena es un palíndromo
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void eliminarEspacios(char* destino, const char* origen){
    int j = 0;
    for (int i = 0; origen[i] != '\0'; i++){
        if (origen[i] != ' '){
            destino[j] = tolower(origen[i]);
            j++;
        }
    }
    destino[j] = '\0';
}

int esPalindromo(const char* cadena){
    int inicio = 0;
    int fin = strlen(cadena) - 1;

    while (inicio < fin){
        if (cadena[inicio] != cadena[fin]){
            return 0;
        }
        inicio++;
        fin--;
    }
    return 1;
}

int main() {
    char cadena[100], procesada[100];

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0'; // Eliminar salto de línea

    eliminarEspacios(procesada, cadena);

    if (esPalindromo(procesada)) {
        printf("La cadena es un palíndromo.\n");
    } else {
        printf("La cadena no es un palíndromo.\n");
    }
    return 0;
}
