#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, num2;
    bool opc1 = false, opc2 = false, opc3 = false, opc4 = false, opc5 = false, opc6 = false;

    printf("\nIngresa dos numeros diferentes.");
    printf("\nNumero 1: ");
    scanf("%i", &num);
    printf("Numero 2: ");
    scanf("%i", &num2);

    // Comparaciones
    if (num == num2) {
        opc1 = true;
    }

    if (num != num2) {
        opc2 = true;
    }

    if (num > num2) {
        opc3 = true;
    }

    if (num >= num2) {
        opc4 = true;
    }

    if (num < num2) {
        opc5 = true;
    }

    if (num <= num2) {
        opc6 = true;
    }

    // Impresión de los resultados
    printf("\nEl resultado de num == num2 es: %d", opc1);
    printf("\nEl resultado de num != num2 es: %d", opc2);
    printf("\nEl resultado de num > num2 es: %d", opc3);
    printf("\nEl resultado de num >= num2 es: %d", opc4);
    printf("\nEl resultado de num < num2 es: %d", opc5);
    printf("\nEl resultado de num <= num2 es: %d", opc6);

    return 0;
}
