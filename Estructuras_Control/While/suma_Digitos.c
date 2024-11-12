#include <stdio.h>

int main() {
    int numero, resultado = 0;
    int i = 0;    
    int suma[i]; 
    
    printf("\nIngresa un numero: ");
    scanf("%d", &numero);

    while (numero > 0) {
        suma[i] = numero % 10;   // Extrae el ultimos digito
        numero = numero / 10;   // Elimina el ultimo digito
        i++;  
    }

    for (int j = 0; j < i; j++) {
        resultado += suma[j];  // Suma los dijitos del arreglo.
    }

    printf("La suma de los digitos es: %d\n", resultado);

    return 0;
}
