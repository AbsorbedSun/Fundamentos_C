#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    int resul;
    printf("\nExiste una jerarquia de opercaiones donde se realizan algunas operaciones antes que otras,");
    printf("\npor ejemplo: la multiplicacion y division antes que la suma o resta.");

    printf("\nAdemas de realizarse de iaquierda a derecha");

    printf("\n10 + 15 * 5 / 3 = ?");
    resul = 10 + 15 * 5 / 3;

    printf("\nSin seguir el orden jerarquico la operacion quedaria como: 41, cuando el verdadero valor es: %d", resul);
    printf("\nPuesto que se realiza primero la multiplicacion, despues la division, seguida de la suma.");
    return 0;
}