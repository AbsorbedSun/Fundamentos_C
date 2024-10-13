// Función que realiza operaciones básicas

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int Operadores(int Opc, int Num1, int Num2) {
    if (Opc == 1) {
        return Num1 += Num2;
    } else if (Opc == 2) {
        return Num1 -= Num2;
    } else if (Opc == 3) {
        return Num1 *= Num2;
    } else if (Opc == 4) {
        
        if (Num2 != 0) {
            return Num1 /= Num2;
        } else {
            printf("Error: División por cero no permitida.\n");
            return -1; 
        }
    } else if(Opc == 5){
        return Num1 %= Num2;
    }else {
        return -1; 
    }
}

int main() {
    bool ciclo = true;
    char fin;
    int opc;
    int num1, num2;

    while (ciclo) {
        printf("\nSelecciona que operacion deseas realizar.");
        printf("\n1. Suma");
        printf("\n2. Resta");
        printf("\n3. Multiplicacion");
        printf("\n4. Division");
        printf("\n5. Cociente");
        printf("\nOpcion: ");
        scanf("%i", &opc);

        printf("\nIngresa los numeros a operar.");
        printf("\nNumero 1: ");
        scanf("%i", &num1);
        printf("Numero 2:");
        scanf("%i", &num2);

        num2 = Operadores(opc, num1, num2);
        if (num2 == -1) {
            printf("Selecciona una opcion dentro del menu o evita dividir por cero.\n");
        } else {
            printf("\nEl resultado es: %d\n", num2);
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