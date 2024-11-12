#include <stdio.h>

int main() {

    char letra;

    printf("\nTeclee una letra para averigura si es vocal.");
    printf("\nLetra: ");
    scanf("%c", &letra);

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("La letra es vocal.\n");
            break;
    
        default:
            printf("La letra No es una vocal.\n");
            break;
    }

    return 0;
}