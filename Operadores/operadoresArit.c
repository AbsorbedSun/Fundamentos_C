#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// Función que realiza operaciones básicas
int Operadores(int Opc, int Num1, int Num2) {
    if (Opc == 1) {
        return Num1 + Num2;
    } else if (Opc == 2) {
        return Num1 - Num2;
    } else if (Opc == 3) {
        return Num1 * Num2;
    } else if (Opc == 4) {
        
        if (Num2 != 0) {
            return Num1 / Num2;
        } else {
            printf("Error: División por cero no permitida.\n");
            return -1; 
        }
    } else {
        return -1; 
    }
}

int main() {
    bool ciclo = true;
    char fin;
    int opc;
    int num1, num2, resultado;

    while (ciclo) {
        printf("\nSelecciona que operacion deseas realizar.");
        printf("\n1. Suma");
        printf("\n2. Resta");
        printf("\n3. Multiplicacion");
        printf("\n4. Division");
        printf("\nOpcion: ");
        scanf("%i", &opc);

        printf("\nIngresa los numeros a operar.");
        printf("\nNumero 1: ");
        scanf("%i", &num1);
        printf("Numero 2:\n");
        scanf("%i", &num2);

        resultado = Operadores(opc, num1, num2);
        if (resultado == -1) {
            printf("Selecciona una opcion dentro del menu o evita dividir por cero.\n");
        } else {
            printf("\nEl resultado es: %d\n", resultado);
        }

        printf("¿Desea realizar otra operacion? (s/n): ");
        scanf(" %c", &fin);  
        fin = tolower(fin);  

        if (fin == 'n') {
            ciclo = false;
            printf("Saliendo del programa...\n");
        } else if (fin != 's') {
            printf("Selecciona una opción válida (s/n).\n");
        }
    }

    return 0;
}