#include <stdio.h>
#include <stdbool.h>

int main() {
    int num = 5, num2 = 7;
    bool igual = true, or_result = true, diferente = true, and_result = true;

    printf("\nHagamos uso de los Operadores Logicos");

    // Uso del operador ==
    if (num == num2) {
        igual = true;
    } else {
        igual = false;
    }

    // Uso del operador !=
    if (num != num2) {
        diferente = true;
    } else {
        diferente = false;
    }

    // Uso del operador ||
    if (num || num2) {
        or_result = true;
    } else {
        or_result = false;
    }

    // Uso del operador &&
    if (num && num2) {
        and_result = true;
    } else {
        and_result = false;
    }

    // Imprimir los resultados
    printf("\n¿Los numeros %d y %d son iguales? %s", num, num2, igual ? "Sí" : "No");
    printf("\n¿Los numeros %d y %d son diferentes? %s", num, num2, diferente ? "Sí" : "No");
    printf("\nEl uso del operador OR en los numeros %d y %d da el resultado de: %s", num, num2, or_result ? "Verdadero" : "Falso");
    printf("\nEl uso del operador AND en los numeros %d y %d da el resultado de: %s", num, num2, and_result ? "Verdadero" : "Falso");

    return 0;
}
