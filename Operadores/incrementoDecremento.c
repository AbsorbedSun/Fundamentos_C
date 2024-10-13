// Programa que hace uso de operadores de incremento y decremento
#include <stdio.h>

void Incremento() {
    int n = 10;
    printf("\nValor inicial es: 10");
    printf("\n\nIncremento de la forma:");

    printf("\n\nn++ (post-incremento):");
    printf("\nValor antes del incremento: 10", n++);
    printf("\nValor después del incremento: %d", n);

    printf("\n\n++n (pre-incremento):");
    printf("\nValor antes del incremento: %d", n);
    printf("\nValor después del incremento: %d", ++n);

    printf("\n\nn += 1:");
    printf("\nValor antes del incremento: %d", n);
    printf("\nValor después del incremento: %d", n += 1);

    printf("\n\nn = n + 1:");
    printf("\nValor antes del incremento: %d", n);
    printf("\nValor después del incremento: %d", n = n + 1);
}

void Decremento() {
    int n = 10;

    printf("\nValor inicial es: 10");
    printf("\n\nDecremento de la forma:");

    printf("\n\nn-- (post-decremento):");
    printf("\nValor antes del decremento: 10", n--);
    printf("\nValor después del decremento: %d", n);

    printf("\n\n--n (pre-decremento):");
    printf("\nValor antes del decremento: %d", n);
    printf("\nValor después del decremento: %d", --n);

    printf("\n\nn -= 1:");
    printf("\nValor antes del decremento: %d", n);
    printf("\nValor después del decremento: %d", n -= 1);

    printf("\n\nn = n - 1:");
    printf("\nValor antes del decremento: %d", n);
    printf("\nValor después del decremento: %d", n = n - 1);
}

int main() {
    int opc;

    printf("\nSelecciona la opción que desees:");
    printf("\n1. Incremento");
    printf("\n2. Decremento");
    printf("\nOpción: ");
    scanf("%i", &opc);

    if (opc == 1) {
        Incremento();
    } else if (opc == 2) {
        Decremento();
    } else {
        printf("Opción inválida. Selecciona 1 o 2.\n");
    }

    return 0;
}

