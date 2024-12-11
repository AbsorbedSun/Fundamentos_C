// Programa 3: Contar números pares e impares
#include <stdio.h>

int main() {
    int numeros[15];
    int pares = 0, impares = 0;

    printf("Ingrese 15 números enteros:\n");
    for (int i = 0; i < 15; i++) {
        printf("Numero %d:", i +  1);
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Hay %d números pares y %d números impares.\n", pares, impares);
    return 0;
}