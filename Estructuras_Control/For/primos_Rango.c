#include<stdio.h>

int esPrimo(int num) {
    if (num <= 1) {
        return 0; 
    }
    // Buscar si tiene otros divisores
    for (int i = 2; i * i <= num; i++) {  
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    int inicio, fin;

    printf("\nIngresa un rango de numeros: ");
    printf("\nInicio: ");
    scanf("%d", &inicio);
    printf("Fin: ");
    scanf("%d", &fin);

    printf("\nLos numeros primos entre %d y %d son:\n", inicio, fin);

    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            printf("%d\n", i);  
        }
    }

    return 0;
}
